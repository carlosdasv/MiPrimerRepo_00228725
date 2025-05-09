#include <iostream>
using namespace std;

int main(void)
{
    int tipoDeCaso = 0, num_1 = 0, num_2 = 0, total = 0;

    cout << "Ingrese un numero entre 1-4" << endl;
    cout << "[1] suma" << endl
         << "[2] resta" << endl
         << "[3] multiplicacion" << endl
         << "[4] division" << endl;
    cin >> tipoDeCaso;

    switch (tipoDeCaso)
    {
    case 1:
        cout << "Ingrese su primer numero" << endl;
        cin >> num_1;
        cout << "Ingrese su segundo numero" << endl;
        cin >> num_2;

        total = num_1 + num_2;
        cout << "El total de su suma es: " << total;
        break;

    case 2:
        cout << "Ingrese su primer numero" << endl;
        cin >> num_1;
        cout << "Ingrese su segundo numero" << endl;
        cin >> num_2;

        total = num_1 - num_2;
        cout << "El total de su resta es: " << total;
        break;

    case 3:
        cout << "Ingrese su primer numero" << endl;
        cin >> num_1;
        cout << "Ingrese su segundo numero" << endl;
        cin >> num_2;

        total = num_1 * num_2;
        cout << "El total de su multiplicacion es: " << total;
        break;

    case 4:
        cout << "Ingrese el numerador" << endl;
        cin >> num_1;
        cout << "Ingrese el denominador" << endl;
        cin >> num_2;

        if (num_2 == 0)
        {
            cout << "No se puede tener como denominador '0'";
        }
        else
        {
            total = num_1 / num_2;
            cout << "El total de su division es: " << total;
        }
        break;

    default:
        cout << "Usted no ha ingresado un valor valido";
        break;
    }

    return 0;
}
