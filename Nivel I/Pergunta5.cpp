#include <iostream>

using namespace std;

int main()
{
    int numero1;
    int numero2;
    int resultado;

    cout << "Digite um numero: ";
    cin >> numero1;

    cout << "Digite um numero: ";
    cin >> numero2;

    resultado = numero1 + numero2;

    if (resultado>20)
    {
        cout<<resultado + 8;
    }else{
        cout<<resultado - 5;
    }
}
