#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
   string keyboard_char  = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
   char word;
    while (scanf("%c",&word) != EOF) {
        word = tolower(word);
        if (isspace(word))
            cout << word;
        else{
            for (int i = 0; keyboard_char[i]; ++i)
                if (word == keyboard_char[i]){
                    cout << keyboard_char[i - 2];
                    break;
                }
        }
    }
    return 0;
}
