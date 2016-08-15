#include <iostream>
/*Ingresar 10 numeros enteros y contar cuantos son divisibles entre 5
y sacar su promedio
*/
using namespace std;

int num=0, cont=0, var=0;
double prom = 0;
int main()
{
    while (cont!=10)
    {

    cout<<"Ingreso un numero"<<endl;
    cin>>num;

    if ((num%5)==0)
    {
        var++;
        prom=prom+num;
    }
    cont++;
    }
    prom=prom/var;
    cout<<"Se encontraron" <<var<< "Divisible entre 5 y su promedio es" <<prom;

}
