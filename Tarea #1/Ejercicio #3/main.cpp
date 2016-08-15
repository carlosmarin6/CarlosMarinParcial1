#include <iostream>
//Ingresar un número e indicar si es par o impar

using namespace std;

int main()
{
    int num;

  cout<<"Escriba un numero: ";
  cin>>num;

  if(num % 2 == 0){
        cout<<"El numero es Par\n";
        }

   else{
     cout<<"El numero es Impar\n";
     }
     return 0;
}

