#include <iostream>
/*Ingresar un numero, preguntar si desea continuar, presentar suma y promedio
Ahora solo debe ingresar divisibles entre 5 y menores a 100
*/

using namespace std;

int num, suma=0,c=0,prom;
char resp;
int main()
{do{
        do{
        cout<<"Ingresar un numero...";
        cin>>num;
        suma+=num;
        }while(!(num%5==0) and (num>100));

do{
    cout<<"Desea Continuar?...";
    cin>>resp;
    resp=toupper(resp);
}
    while((resp!='S') and (resp!='N'));
    c++;
}
while(resp!='N');
prom=suma/c;

cout<<"Suma de los numeros es..." <<suma<<endl;
cout<<"Promedio es..."<<prom<<endl;

}
