#include <iostream>
#include <time.h>
#include <stdlib.h>
/*Generar números 10 números pares aleatorios, deberá de usar ciclos while anidados un ciclo
para contar los 10 números y otro para validar que el número generado sea par, uno dentro de otro*/

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
