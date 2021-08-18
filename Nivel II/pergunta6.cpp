#include <iostream>

using namespace std;

int main()
{

    float velocidade;
    float tempo;
    float litros_usados;
    float distancia;

    cout << "Qual o tempo que foi gasto na viagem (horas): \n";
    cin >> tempo;

    cout << "Qual foi sua velocidade Media em KM/H: \n";
    cin >> velocidade;

    distancia      = tempo * velocidade;
    litros_usados  = distancia / 12;
    
    cout << "\nVelocidade: "    << velocidade;
    cout << "\nTempo: "         << tempo;
    cout << "\nDistancia: "     << distancia;
    cout << "\nLitros_usados: " << litros_usados;
    
}
