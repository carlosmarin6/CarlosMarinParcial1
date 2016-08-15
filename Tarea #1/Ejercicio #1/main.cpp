#include <iostream>

using namespace std;

int main( void )
{
    int num;

    do
    {
        cout << "Introduce un numero (0 para salir): ";
        cin >> num;

        if ( num > 0 ) cout << num << " es positivo" << endl;
        if ( num < 0 ) cout << num << " es negativo" << endl;
    }
    while ( num != 0 );

    return 0;
}
