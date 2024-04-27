#include <iostream>

using namespace std;

int main()
{
    float  n, constante, f, cos,k;
    cout << "Ingrese la temperatua en grados celsius" << endl;
    cin>> n;
    constante = 1.8*n;
    f= constante +  32;
    k= n+ 273.15;

    cout<< "Grados  Fahrenheit:"<<f<< endl;
    cout<< "Grados  Kelvin:"<<k<< endl;
    return 0;
}
