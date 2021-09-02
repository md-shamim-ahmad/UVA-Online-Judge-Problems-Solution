#include<cstring>
#include<iostream>
using namespace std;

int main()
{
	int p = 0;
	string str;
	while (cin >> str && str != "#")
	{
		cout << "Case " << ++p << ": ";
		if (str == "HELLO")
			cout << "ENGLISH" << endl;
		else if (str == "HOLA")
			cout << "SPANISH" << endl;
		else if (str == "HALLO")
			cout << "GERMAN" << endl;
		else if (str == "BONJOUR")
			cout << "FRENCH" << endl;
		else if (str == "CIAO")
			cout << "ITALIAN" << endl;
		else if (str == "ZDRAVSTVUJTE")
			cout << "RUSSIAN" << endl;
		else
			cout << "UNKNOWN" << endl;
	}
	return 0;
}
