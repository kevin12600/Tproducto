#include <iostream>
#include  <math.h>

using namespace std;



int main()
{
    int  altura, base, area, suma;

    cout << "Ingrese la altura del  triangulo: " << endl;
    cin >> altura;
    cout << "Ingrese la base del  triangulo: " << endl;
    cin>> base;

     suma=base*altura;
     area = suma/2;

     cout<<"El area del triangulo es: "<<area<< endl;
    return 0;
}
