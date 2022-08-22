#include <bits/stdc++.h>
using namespace std;

struct items{
	pair<int, int> left;
	pair<int, int> right;
	int cnt;
};

struct SGT{ //segment tree
	int size;
	vector<items> values;
	void init(int n) {
		size = 1;
		while (size < n) 
			size *= 2;
		values.resize(2 * size);
	}
	items merge(items a, items b) {
		items res;
		res.left = a.left, res.right = b.right;
		if (a.left.first == b.left.first)
			res.left.second += b.left.second;
		if (a.right.first == b.right.first)
			res.right.second += a.right.second;
		res.cnt = max(max(a.right.second, b.left.second), max(a.cnt, b.cnt));
		if (a.right.first == b.left.first)
			res.cnt = max(res.cnt, a.right.second + b.left.second);
		return res;
	}
	void build(vector<int> &ar, int x, int lx, int rx) {
		if (rx - lx == 1) {
			if (lx < (int)ar.size()) {
				values[x].left = {ar[lx], 1};
				values[x].right = {ar[lx], 1};
				values[x].cnt = 1;
			}
			return;
		}
		int m = (lx + rx) / 2;
		build(ar, 2 * x + 1, lx, m);
		build(ar, 2 * x + 2, m, rx);
		values[x] = merge(values[2 * x + 1], values[2 * x + 2]);
	}
	void build(vector<int> &ar) {
		build(ar, 0, 0, size);
	}

	items query(int l, int r, int x, int lx, int rx) {
		if (lx >= r || rx <= l) {
			return {
				{0, 0},
				{0, 0},
				0
			};
		}
		if (lx >= l && rx <= r)
			return values[x];
		int m = (lx + rx) / 2;
		items a = query(l, r, 2 * x + 1, lx, m);
		items b = query(l, r, 2 * x + 2, m, rx);
		return merge(a, b);
	}
	items query(int l, int r) {
		return query(l, r, 0, 0, size);
	}

	void display(vector<int> &arr) {
		for (auto it : arr) {
			// cout << it.left.first << " " << it.left.second << '\n';
			// cout << it.right.first << " " << it.right.second << '\n';
			cout << it << " " << values[it].cnt << "\n";

		}
		cout << '\n';
	}
}sgt;

int main() {
	// ios::sync_with_stdio(0);
  // cin.tie(0); cout.tie(0);
	int n, m;
	while (scanf("%d", &n) && n != 0) {
		cin >> m;
		vector<int> arr(n);
		sgt.init(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}    
		sgt.build(arr);
		while (m--) {
			int l, r;
			cin >> l >> r;
			auto it = sgt.query(l - 1, r);
			cout << it.cnt << '\n';
		}
	}
	return 0;
}
