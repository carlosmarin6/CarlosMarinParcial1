#include <iostream>

using namespace std;
/*
Ingresar el turno de trabajo y las ventas y calcular la comision del empleado de acuerdo al turno
TURNO    %COMI
1,3       5%
4,2       4%
Otros     3%
*/

float ventas, comision;
int turno;
int main()
{
    cout <<"Ingresar las ventas del mes...";
    cin>>ventas;
    cout<<"turno";
    cin>>turno;

    if ((turno==1) or (turno==3))
    comision=ventas*0.05;

    else if ((turno==4) or (turno==2))
    comision=ventas*0.04;

    else
        comision=ventas*0.03;

    cout<<"Comision es "<<comision<<"\n";


}
