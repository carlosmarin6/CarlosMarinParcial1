#include <iostream>

/*Ingresar 10 n�meros usando el ciclo while y contar cuantos son n�meros son divisibles entre 5.
*/

using namespace std;

int num=0, cont=0, var=0;
int main()
{
    while (cont!=10)
    {

    cout<<"Ingreso un numero"<<endl;
    cin>>num;

    if ((num%5)==0)
    {
        var++;
    }
    cont++;
    }
    cout<<"Se encontraron" <<var<< "Divisible entre 5" <<endl;

}
