#include <iostream>
//Ingresar un numero y decir cuantas cifras tiene

using namespace std;

int numero, rev;
double contador=1;
int main()
{
    cout << "Ingresar un numero";
    cin>>numero;


    while (numero>=10)
    {   rev=numero%10;
        cout<<rev;
        numero=numero/10;
        contador++;

    }
    cout << numero << "\n";
    cout << "Numero de cifras es" << contador << "\n";


}
