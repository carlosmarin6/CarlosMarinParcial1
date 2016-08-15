#include <iostream>
/*Usando un ciclo do/while, Ingresar el turno de trabajo, validar con ciclo do while que solo sea 1,2,3.
Luego ingresar las horas de los cinco días de la semana usando el ciclo for.
Presentar el total de horas y el pago que es 100 la hora.
Luego preguntar si desea continuar, validando la respuesta que solo sea S o N.
Al final del ciclo presentar el mejor sueldo obtenido*/

using namespace std;
int horas, turno, i, sueldo_hora,pago;
int mayor_sueldo;
char continuar;
int main()
{
    do
    {
        cout<<" Ingrese turno (1,2,3)..."<<endl;
        cin>>turno;
    } while (turno!=1 && turno!=2 && turno!=3);
        sueldo_hora=0;
        for (i=1;i<=5;i++)
        {
            cout <<"Horas trabajadas"<<endl;
            cin>>horas;
            sueldo_hora+=horas;
        }
        pago=sueldo_hora*100;
        if (pago>mayor_sueldo)
            mayor_sueldo=pago;

        cout<<"Trabajo "<<horas<< " Con pago "<<pago<<endl;
        cout<<"Desea Continuar ingresando horas?... "<<endl;
        cin>>continuar;
        if ((continuar!='S') && (continuar='s'));
    {
    continuar = 'n';
    cout <<"Letra incorrecta\n"<<endl;

}while ((continuar!='n') && (continuar!='N'));

    cout <<"El mayor sueldo es..."<<mayor_sueldo <<endl;


}
