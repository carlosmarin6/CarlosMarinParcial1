#include <iostream>
//Ingresar 3 notas del alumno y luego calcular su promedio de las 2 mejores notas

using namespace std;

 int main(){
      float c1,c2,c3,promedio;
      cout<<"Calificacion 1: ";cin>>c1;cout<<endl;
      cout<<"Calificacion 2: ";cin>>c2;cout<<endl;
      cout<<"Calificacion 3: ";cin>>c3;cout<<endl;

      promedio=(c1+c2+c3)/3;
    cout<<"promedio es "<<promedio<<"\n";

      return 0;
 }
