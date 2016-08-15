#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;

int main(int arge, char *argv[])
{
    char c;

    cout<<"Ingrese un caracter" <<endl;
    cin>>c;

    switch (c)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':

    cout << "Es vocal"<< endl;
    break;

    default:
    cout<< "NO es vocal"<< endl;
    break;


}

system("PAUSE");
return 0;

}
