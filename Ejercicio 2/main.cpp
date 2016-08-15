#include <iostream>
/*
Ingresar la nota del alumno y escribir la observacion
    1-59 reprobado
    60-80 bueno
    81-90 muy bueno
    91-100 sobresaliente
*/
using namespace std;
int num;

int main()
{
    cout << "Ingresar un numero";
    cin>>num;
    if ((num<0) or (num>100))
        cout<<"Nota Incorrecta";

    if ((num>=1) and (num<=59))
        cout<<"Reprobado";

    else if ((num>=60) and (num<=80))
        cout<<"Bueno";

    else if ((num>=81) and (num<=90))
        cout<<"Muy Bueno";

    else if ((num>=91) and (num<=100))
        cout<<"Sobresaliente";


}
