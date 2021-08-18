#include<iostream>

int main(){
	int numero;
	
	//Faltou ; e aspas duplas na linha 7.
	std::cout <<"Digite um numero:";
	std::cin >> numero;
	//Na primeira vez coloquei o sinal de menor.
	if (numero > 20){
		std::cout << numero;	
	} else{
		std::cout <<"numero menor do que 20";
		
	}
}
