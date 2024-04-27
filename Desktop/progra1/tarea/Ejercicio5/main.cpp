#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float v;
    float r1,r2,r3;
    cout << "Ingrese la radio de una esfera" << endl;
    cin>> v;

    r1= pow (v,3);
    r2= 0.75*r1;
    r3= r2*3.1416;
    cout << "El volumen de la esfera es de: "<<r3 << endl;

    return 0;
}

