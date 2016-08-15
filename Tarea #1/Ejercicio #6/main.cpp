#include <iostream>
/*Se ingresa el tipo de cliente 1,2,3, luego la cantidad de producto,
el precio y calcular el subtotal ,descuento usando la siguiente tabla:
Tipo de cliente   descuento
      1               7%
      2              8%
      3              10
*/
using namespace std;

float producto, precio, subtotal, descuento;
int cliente;
int main()
{
    cout <<"Ingresar cantidad de producto...";
    cin>>producto;
    cout <<"Ingresar precio...";
    cin>>precio;
    cout<<"cliente";
    cin>>cliente;

    if (cliente==1)
    descuento=cliente*0.07;

    else if (cliente==2)
    descuento=cliente*0.08;

    else if (cliente==3)
    descuento=cliente*0.10;

    else
        descuento=cliente*0.00;

    cout<<"descuento es "<<descuento<<"\n";


}
