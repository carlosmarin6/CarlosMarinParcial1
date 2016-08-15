#include <iostream>
/* Ingresar 10 numeros y al final presentar el promedio de los numeros que estan entre 50-100,
cuantos pares divisibles entre 5 se ingresaron y el numero mayor de todos. */


using namespace std;

int num=0, cont=0, var=0, mayor=0,sum=0;
double prom = 0;
int main()
{
    while (cont!=10)
    {

    cout<<"Ingresa un numero"<<endl;
    cin>>num;
    if (((num>=50)==0)&&(num<=100))
    {
        sum++;
        prom=prom+num;

    if (((num%2)==0)&&(num%5==0))
    {
        var++;
    }
    if (num>mayor)

    { mayor=num;
    }
        cont++;
    }
    prom=prom/sum;
    }
    cout<<"Se encontraron"<< sum <<"Pares divisible entre 5"<<endl;
    cout<<"Promedio de numeros entre 50-100"<< prom <<endl;
    cout<<"Numero mayor es "<< mayor <<"\n";

}
