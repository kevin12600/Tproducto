#include <iostream>
#include <math.h>

using namespace std;

int main()

{
    float x1,x2,y1,y2;
 float p1,p2,p3,p4;
 float r1,r2;
    cout << "Ingrese x1" << endl;
    cin>> x1;
    cout << "Ingrese x2" << endl;
    cin>> x2;
    cout << "Ingrese y1" << endl;
    cin>> y1;
    cout << "Ingrese y2" << endl;
    cin>> y2;

    p1= x2-x1;
    r1= pow(p1,2);
    p2= y1-y2;
    r2= pow(p2,2);
    p3= r1+r2;
    p4= sqrt(p3);

    cout << "La distancia entre dos puntos es de:  "<<p4 << endl;

    return 0;
}
