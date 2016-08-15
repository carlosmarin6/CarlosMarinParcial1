#include <iostream>
/*
Ingresar un numero que corresponde al dia de semana 1-7, domingo a lunes.
Si ingresa un numero fuera de ese rango, se tiene que escribir: dia incorrecto.
*/
using namespace std;
int dia;

int main()
{
    cout << "Ingresar un numero";
    cin>>dia;
    switch(dia)
    {
    case 1:
        cout<<"Es Domingo";
        break;
    case 2:
        cout<<"Es Lunes";
        break;
    case 3:
        cout<<"Es Martes";
        break;
    case 4:
        cout<<"Es Miercoles";
        break;
    case 5:
        cout<<"Es Jueves";
        break;
    case 6:
        cout<<"Es Viernes";
        break;
    case 7:
        cout<<"Es Sabado";
        break;

    default:
        cout<<"Numero Invalido";
        break;
    }

}
