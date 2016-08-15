#include <iostream>
/*Ingresar un numero entre 50-100 hacerlo 10 veces
*/

using namespace std;

int i, numero;
int main()
{
    for (i=0;i<5;i++)
    {
        do{
        cout <<"Ingresar un numero 50-100...";
        cin>>numero;
    }
        while (!((numero>=50) & (numero<=100)));
         cout<<"Numero Ingresado Correcto"<<endl;
    }

}
