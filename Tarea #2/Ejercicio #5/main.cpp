#include <iostream>

using namespace std;

int main() {
 int numero;
 cout<<"Ingrese un numero...";
 cin>>numero;
 cout<<"\nTabla del "<<numero;
 cout<<endl;
 for(int i = 1; i < 11; i++){
 cout<<i<<"*"<<numero<<"="<<i*numero;
 cout<<endl;
 }
 cin.get();
 return 0;
 }
