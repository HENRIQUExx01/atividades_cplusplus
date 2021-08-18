#include<iostream>

int main (){
	int numero;
	//faltou ; linha 6
	std::cout <<"Digite um numero e descubra se e impar ou par:";
	std::cin >> numero;
	if (numero % 2== 0){
    	std::cout << "Par";	
	}else {std::cout << "Impar";
	}
	
	
}
