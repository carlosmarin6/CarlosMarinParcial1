#include <iostream>
//ingresar 3 números y determinar cuál es el mayor.

using namespace std;

int main(){
    int A,B,C;
    cout<<("Ingresa un numero ")<<endl;
    cin>>A;
    cout<<("Ingresa otro numero  ")<<endl;
    cin>>B;
    cout<<("Ingresa un numero  ")<<endl;
    cin>>C;
    if(A > B && A > C){
    cout<<"El numero mayor es "<<A;
    }else{
        if(B > A && B > C){
        cout<<"El numero mayor es "<<B;
        }else{
        cout<<"El numero mayor es "<<C;
        }
    }
   return 0;
}
