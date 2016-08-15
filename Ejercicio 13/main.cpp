#include <iostream>
/*Ingresar un numero mayor a 50, preguntar si desea continuar, al finalizar el ciclo presentar
el mayor y el menor.
*/
using namespace std;
char resp;
int num,i,mayor,menor,c=0;
int main()
{
    do{
            do{
                cout<<"Ingresar numero mayor a 50...";
                cin>>num;
            } while (num<50);
            if (c==0)
            {
                mayor=num;
                menor=num;
            }
                c++;
                if (num>mayor)
                    mayor=mayor;
                if (num<menor)
                    menor=num;

                do{
    cout<<"Desea Continuar?...";
    cin>>resp;
    resp=toupper(resp);
}
    while((resp!='S') and (resp!='N'));
    c++;
}
while(resp!='N');

    cout <<"Mayor es..."<<mayor<<endl;
    cout <<"Menor es..."<<menor<<endl;


    }
