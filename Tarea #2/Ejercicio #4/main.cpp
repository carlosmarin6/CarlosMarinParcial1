#include <iostream>

using namespace std;

using namespace std;
char resp;
int num,i,mayor,menor,c=0;
int main()
{
    do{
                cout<<"Ingresar un numero...";
                cin>>num;
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
