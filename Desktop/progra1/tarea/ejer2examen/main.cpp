#include <iostream>

using namespace std;

int main()
{
    double dinero = 1000.0;
    int opc;
    double cant;


    do{



    cout << "Bienvenido al cajero automatico" << endl;
    cout << "1. Ingresar dinero en cuenta" << endl;
    cout << "2. Retirar dinero de la cuenta" << endl;
    cout << "3. Salir" << endl;
    cout << "Opcion: " << endl;
    cin>> opc;

    switch (opc){
        case 1: {


    cout<<"Ingrese la cantidad a ingresar: "<<endl;
    cin>> cant;
    dinero+=cant;
    cout << "saldo actual: "<< dinero << "Q "<< endl;
    break;
        }
        case 2:{


        cout << "Ingrese la cantidad a retirar: "<< endl;
                cin >> cant;
                if (cant<= dinero) {
                    dinero -= cant;
                    cout << "Nuevo saldo: " << dinero << "Q" << endl;
                } else {
                    cout << "Saldo insuficiente" << endl;
                }
                break;
        }
        case 3:

                cout << "Gracias por utilizar nuestro cajero automatico" << endl;
                break;
        default:

        cout << "Opción inválida, por favor intente de nuevo" << endl;
        }
    }
    while (opc != 3);

    return 0;
}
