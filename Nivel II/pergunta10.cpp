#include<iostream>

using namespace std;

int main (){
	
	float temp_celsius;
	float temp_kelvin;
	float temp_fahrenheit;
	
	cout << "Transforme Graus Fahrenheit em Kelvin: ";
	cin >> temp_fahrenheit;
	//faltou ; na linha 14
	temp_celsius = ((temp_fahrenheit-32) * 5) / 9;
	temp_kelvin = temp_celsius + 273.15;
	
	cout << "Convertido: " << temp_kelvin;
	return 0;
}
	
