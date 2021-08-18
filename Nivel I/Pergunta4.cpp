#include<iostream>

int main (){
	int numero;
	
	std::cout <<"Digite um numero \n";
	std::cin >>numero;
	if (numero > 0){
		std::cout << "Positivo";
	}
		if (numero < 0){
		std::cout << "Negativo";
	}
		if (numero == 0){
		std::cout << "Nulo";
	}
	}
