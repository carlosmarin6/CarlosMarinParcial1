#include <iostream>
#include <time.h>
#include <stdlib.h>
/*Generar n�meros 10 n�meros pares aleatorios, deber� de usar ciclos while anidados un ciclo
para contar los 10 n�meros y otro para validar que el n�mero generado sea par, uno dentro de otro*/

using namespace std;

int num,i;
int main ()
{
srand (time(NULL));
cout<<"Diez numeros pares aleatorios "<<endl;

  for (i=0,i<=10,i)
{
        num=-50 + rand() % (100+50);
        if ((num%2)==0)
        {
            cout<<"num"<<endl;
            i++;
        }

}
}
