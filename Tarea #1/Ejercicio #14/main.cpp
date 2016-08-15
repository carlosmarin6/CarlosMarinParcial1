#include<iostream>
using namespace std;

int main()
{
 long int nume;
 long int inve;

 cout<<"Numero: ";
 cin>>nume;

 for(int cifr=inve=0; nume; cifr=nume%10, inve=inve*10+cifr, nume/=10 );
 cout<<"Inverso: "<<inve<<endl;

    cin.ignore();
    cin.get();
    return 0;
}

