#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    char s[16];

    cout << "ingrese una palabra: ";
    cin >> s;
    int l = 0;
    while (s[l]){
        l++;
    }

    int i = 0;
    for (i = 0; i < l; i++){
        if (s[i] != s[l-i-1])
            break;
    }
    if (i == l)
        cout << "es un palindromo" <<endl;
    else
        cout << "no es un palindromo" <<endl;

    getch();
    return 0;
}


// adding some comment
