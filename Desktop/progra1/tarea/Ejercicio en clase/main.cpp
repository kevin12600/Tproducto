#include <iostream>

using namespace std;

int main()
{

/*
    if(5<5){
    cout << "Entro al  if" << endl;
    }
    else{
       cout << "Entro al  if" << endl;
    } */

   /* int numero=0;
    cout<< "ingrese un numero entre 1 y 10: "<< endl;
    cin>> numero;
    if(numero==1){

        cout<<"uno"<<endl;

    }else {
            if(numero==2){

     cout<<"dos"<<endl;
            } else {
                if(numero==3){
                cout<<"dos"<<endl;
            }
     }

    }*/



   /* char variable;
     cout<< "ingrese un valor: " << endl;
     cin >> variable;

     switch (variable){
     case '1': cout << "Entro caso 1"<< endl;
               break;

      case '3': cout<<"Entro caso 2"<< endl;
               break;
        case '4': cout<<"Entro caso 3"<< endl;
               break;

        case '5': cout<<"Entro caso 5"<< endl;
               break;
 default: cout<< "Debe ser un numero entre 1 y 5  " << endl;


     }*/


/*

     int numero;

      cout<<"ingrese numerp"<< endl;


       cin>> numero;


       if (numero%2==0){
           cout<<"el numero es par"<< endl;
       }
       else{   cout<<"el numero es impar"<< endl;
       }
*/

float horas,minutos,total;
const float cobro =1.50;

   cout<< "ingrese tiempo en hora"<< endl;
   cin>> horas;
   cout<< "ingrese tiempo en minutos"<< endl;
   cin>> minutos;

    if (minutos> 0){

        horas++;
    }
total = horas*cobro;
 cout<< "el cobro es de :  "<<total << endl;


    return 0;

}
