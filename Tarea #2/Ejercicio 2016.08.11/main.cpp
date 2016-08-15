#include <iostream>
/*Ingresar las ventas de 4 semanas usando un clico for,
luego presentar el total de las 4 ventas y la comision
que es el 5% del total de las ventas.
Calcular el IHSS (mayor a 700 = 245 y sino el 3.5% de la comision)
y el total a pagar que es la comision menos el IHSS, preguntar si desea continuar al final presentar
el total a pagar mayor.
*/

using namespace std;

int ventas, sumaventa,comision,ihss,tp;
int mayortp,i;
char resp;
int main()
{ mayortp=0;
    do
    {sumaventa=0;
   for (i=0;i<4;i++)
        {
            cout<<"Ingresar ventas"<<i<<" :";
            cin>>ventas;
            sumaventa+=ventas;
        }
        comision=sumaventa*0.05;
        if (comision>700)
            ihss=245;
        else
            ihss=0.05*comision;
        tp=comision-ihss;
        cout<<"Suma de ventas "<<sumaventa <<endl;
        cout<<"Comision..."<<comision <<endl;
        cout<<"Seguro Social..."<<ihss <<endl;
        cout<<"Total a pagar..."<<tp <<endl;
        if (tp>mayortp)
            mayortp=tp;

    do

    {
        cout <<"Desea Continuar?";
        cin>>resp;
        resp=toupper (resp);
    }  while ((resp!='S')and(resp!='N'));

    } while (resp!='N');
        cout<<"Mayor Total a pagar es..."<<mayortp<<endl;



}
