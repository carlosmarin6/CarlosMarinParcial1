#include <iostream>
/*Econtrar los números primos que están entre 1-100*/
/*Le inclui para que decidiera el rango entre 1 y un numero a escoger por el usuario*/

using namespace std;

int main()
{
  int n=0,c=0,c2=0,res=0,nc=0;
  cout<<"Introduce el limite de numeros: "; cin>>n;
  for(c=1;c<=n;c++)
  {
    for(c2=1;c2<=c;c2++)
    {
      res=c%c2;
      if(res==0)
      {
        nc=nc+1;
      }
    }
    if(nc==2)
    {
      cout<<" "<<c;
    }
    nc=0;
  }
}
