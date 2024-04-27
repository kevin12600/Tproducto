#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Ingrese la altura del triangulo:" << endl;
    cin>> n;

    for(int i=1; i<=n; i++){
        cout<< "*";
        for (int l=1; l<i; l++){
            cout << " ";
        }
        if (i>1){
            cout << "*"<< endl;
        }
            cout<< endl;
        }

        for(int i=n -1; i>= 1; i--){
            cout<< "*";
            for (int l= 1; l<i; l++){
                cout << " ";
            }
            if(i>1){
                cout << "*";
            }
            cout<< endl;
        }

    return 0;
}
https://drive.google.com/drive/folders/1k3UMj7MPhCVzemwr1s9NHup3sBWBj6X2?usp=drive_link
