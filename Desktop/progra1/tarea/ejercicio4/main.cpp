#include <iostream>

using namespace std;

int main()
{
    float n1,n2,n3;
    float suma,result;

    cout << "Ingrese nota 1" << endl;
    cin>> n1;
    cout << "Ingrese nota 2" << endl;
    cin>> n2;
    cout << "Ingrese nota 3" << endl;
    cin>> n3;

    suma= n1+n2+n3;
    result= suma/3;

      cout << "EL promedio es de:  "<<result << endl;
    return 0;
}
