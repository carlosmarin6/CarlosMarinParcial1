#include <iostream>

using namespace std;

int n,i,k;
int main()
{
    cout << "Ingrese cantidad de asteriscos";
    cin>> n;

    for (i=n;i>0;i--)
    {
        for (k=0;k<i;k++)
        {
        cout<<"*";
        }
        cout<<"\n";

    }



}
