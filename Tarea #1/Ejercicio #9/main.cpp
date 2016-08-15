#include <iostream>
//Escribir un programa que detecte si se han introducido en orden ascendente tres números introducidos por el usuario

using namespace std;
int main(){
    int a,b,c;
    cout<<"Ingresa numero"<<endl;
    cin>>a;
    cout<<"Ingresa otro numero"<<endl;
    cin>>b;
    cout<<"Ingresa otro numero"<<endl;
    cin>>c;
      if(a<b & b<c){
          cout<<a<<", "<<b<<", "<<c<<" Estan en orden ascendente";
      }else{
          cout<<a<<", "<<b<<" "<<c<<" No Estan en orden ascendente";
      }
   return 0;
}
