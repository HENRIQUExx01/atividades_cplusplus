#include<iostream>

using namespace std;

int main (){
	
	float valor_inteiro;
	float valor_positivo;
	
	cout <<"Digite um valor inteiro: ";
	cin >> valor_inteiro;
	
	if (valor_inteiro < 0 ){
	valor_positivo = (valor_inteiro * -1);
	cout <<"Resultado: " << valor_positivo;
	} else {
	cout <<"Resultado: " << valor_inteiro;
	}
	return 0;
}


