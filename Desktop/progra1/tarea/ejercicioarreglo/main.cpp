#include <iostream>
#include <vector>

using namespace std;

int main()
{
vector<double> arreglo1 = {1.5, 2.0, 3.5, 4.0};
    vector<double> arreglo2 = {2.0, 3.0, 1.5, 2.5};

    // Inicializar una variable para almacenar el resultado de la multiplicación
    double resultado_multiplicacion = 1.0;

    // Calcular la multiplicación de los valores de ambos arreglos
    for (size_t i = 0; i < arreglo1.size(); ++i) {
        resultado_multiplicacion *= arreglo1[i] * arreglo2[i];
    }

    // Imprimir el resultado
    cout << "El resultado de la multiplicación de los valores de ambos arreglos es: " << resultado_multiplicacion << endl;

    return 0;
}
