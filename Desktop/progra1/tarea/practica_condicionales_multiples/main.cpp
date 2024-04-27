#include <iostream>

using namespace std;

int main()
{
    int n;
    string result= " ";
    cout << "Ingrese numero :" << endl;
    cin>> n;


   if (n >= 1000) {
        result += "M";
        n -= 1000;
    }
     if (n>= 900) {
        result += "CM";
        n-= 900;
    } else if (n >= 500) {
        result += "D";
        n -= 500;
        } else if (n >= 400) {
        result += "CD";
       n -= 400;

        }
    // Convertir decenas
    if (n >= 100) {
        result += "C";
        n-= 100;
    } else if (n >= 90) {
        result += "XC";
        n -= 90;
    } else if (n>= 50) {
        result += "L";
        n -= 50;
    } else if (n >= 40) {
        result += "XL";
        n-= 40;
    }

    // Convertir unidades
    if (n >= 10) {
        result += "X";
        n-= 10;
    } else if (n >= 9) {
        result += "IX";
        n -= 9;
    } else if (n >= 5) {
        result += "V";
        n -= 5;
    } else if (n >= 4) {
        result += "IV";
        n -= 4;
    }

 cout  << " el numero romano es: " << result << std::endl;

    return 0;
}


