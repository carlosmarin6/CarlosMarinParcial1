#include <iostream>
//ingresar un numero y determinar el numero de cifras
//
/*
    1 cifra
    2 cifras
    2 cifras
    4 cifras o mas

*/
using namespace std;
int num;

int main()
{
    cout << "Ingresar un numero";
    cin>>num;
    if (num<0)
        num*=-1;

    if ((num>=1) and (num<=9))
        cout<<"1 Cifra";
    else if ((num>=10) and (num<=99))
        cout<<"2 Cifras";
    else if ((num>=100) and (num<=999))
        cout<<"3 Cifras";
    else
        cout<<"4 Cifras o mas";

}
