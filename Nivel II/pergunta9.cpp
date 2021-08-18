#include<iostream>

using namespace std;

int main (){
	
	float temp_celsius = 0;
	float temp_kelvin;
	
	cout << "Transforme Graus Celsius em Kelvin: ";
	cin >> temp_celsius;
	
	temp_kelvin = temp_celsius + 273.15;
	
	cout << "Convertido: " << temp_kelvin;
	return 0;
}
