#include <iostream>

using namespace std;

int main()
{
    double sueldo;
    float opcion, variable,variable2;
    float spa,spa2,spa3,spa4,spa5,spa6,spa7,spa8;

    double sa,sa2,sa3,sa4,sa5,sa6,sa7,sa8;
    double smenos,smenos2,smenos3,smenos4,smenos5,smenos6,smenos7,smenos8;
        double stotal,stotal2,stotal3,stotal4,stotal5,stotal6,stotal7,stotal8;
    cout << "Ingrese sueldo Q " << endl;
    cin>> sueldo;
    cout << "Elija una opcion Estable 1.(E) O  no Estable 2.(N) " << endl;
    cin>> opcion;

    if(opcion==1){
        cout << "Elija una opcion Una categoria 1.(A),2.(B),3.(C),4.(D) " << endl;

 char variable;
     cout<< "ingrese un valor: " << endl;
     cin >> variable;

     switch (variable){
     case '1':
           spa=(sueldo*20.0)/100;
           sa=spa+sueldo;
           smenos=(sa*6.0)/100;
           stotal=sa-smenos;

         cout << "El sueldo del trabajador es de   Q "<<stotal<< endl;

               break;



      case '2':
             spa2=(sueldo*18.0)/100;
           sa2=spa2+sueldo;
           smenos2=(sa2*6.0)/100;
           stotal2=sa2-smenos2;

          cout << "El sueldo del trabajador es de   Q "<<stotal2<< endl;



               break;

      case '3':
           spa3=(sueldo*15.0)/100;
           sa3=spa3+sueldo;
           smenos3=(sa3*6.0)/100;
           stotal3=sa3-smenos3;

          cout << "El sueldo del trabajador es de   Q "<<stotal3<< endl;



               break;
        case '4':

            spa4=(sueldo*12.0)/100;
           sa4=spa4+sueldo;
           smenos4=(sa4*6.0)/100;
           stotal4=sa4-smenos4;

          cout << "El sueldo del trabajador es de   Q "<<stotal4<< endl;



               break;


 default: cout<< "Debe ser un numero entre 1 y 4  " << endl;


}            } else {
                if(opcion==2){
                       cout<< "Elija una opcion Una categoria 1.(A),2.(B),3.(C),4.(D) "<<endl;
              char variable2;
     cout<< "ingrese un valor: " << endl;
     cin >> variable2;

     switch (variable2){
     case '1':
          spa5=(sueldo*17.0)/100;
           sa5=spa5+sueldo;
           smenos5=(sa5*4.0)/100;
           stotal5=sa5-smenos5;

          cout << "El sueldo del trabajador es de   Q "<<stotal5<< endl;


               break;
      case '2':

          spa6=(sueldo*15.0)/100;
           sa6=spa6+sueldo;
           smenos6=(sa6*4.0)/100;
           stotal6=sa6-smenos6;

          cout << "El sueldo del trabajador es de   Q "<<stotal6<< endl;


               break;


      case '3':
          spa7=(sueldo*14.0)/100;
           sa7=spa7+sueldo;
           smenos7=(sa7*4.0)/100;
           stotal7=sa7-smenos7;

          cout << "El sueldo del trabajador es de   Q "<<stotal7<< endl;



               break;
        case '4':
             spa8=(sueldo*10.0)/100;
           sa8=spa8+sueldo;
           smenos8=(sa8*4.0)/100;
           stotal8=sa8-smenos8;

          cout << "El sueldo del trabajador es de   Q "<<stotal8<< endl;




               break;


 default: cout<< "Debe ser un numero entre 1 y 4  " << endl;

            }

    return 0;
}
}
}
