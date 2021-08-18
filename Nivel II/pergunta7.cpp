#include<iostream>

using namespace std;

int main(){
	
	float temp_celsius;
	float temp_fahrenheit;
	
	cout << "Transforme Graus Celsius em Fahrenheit: ";
	cin >> temp_celsius;
	
	temp_fahrenheit = ( 9 * temp_celsius + 160 ) / 5;
	
	cout << "Convertido: " << temp_fahrenheit;
	
	return 0;
	
	
}
