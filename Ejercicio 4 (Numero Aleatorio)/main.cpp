#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int numero,suma=0,c=0;
int mayor=0;
int menor=0;

int main()

{
    srand(time(0));
    while (c<10)
    {
        numero=1 + rand() % (100-1);
        cout <<"Valor de Numero"<<numero<<"\n";
        suma+=numero;
        c++;
        if (numero>mayor)
            mayor=numero;
        if (numero<menor)
            menor=numero;


    }
    cout<<"Suma de los numeros"<<suma<<"\n";
    cout<<"Numero mayor es "<<mayor<<"\n";
    system ("PAUSE");


}
