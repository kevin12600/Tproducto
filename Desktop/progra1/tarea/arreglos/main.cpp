#include <iostream>

using namespace std;

int main()
{
    int edad;
    char nombre[25];


    cout << "Ingresa tu edad: ";
    cin>> edad;
    //cin.ignore();  /* bufer*/
    cin.ignore(256, '\n');

    cout<< "ingresa tu nombre: ";
    cin.getline(nombre,25);

    cout<<"te llamas "<< nombre<< "y tu edad es "<< edad <<endl;
    return 0;
}
