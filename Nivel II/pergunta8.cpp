#include<iostream>

using namespace std;

int main(){
	
	float temp_celsius = 0;
	float temp_fahrenheit;
	
	cout << "Transforme Graus Fahrenheit em Celsius: ";
	cin >> temp_fahrenheit;
	
	temp_celsius = ((temp_fahrenheit-32) * 5) / 9;

	cout << "Convertido: " << temp_celsius;
	return 0;
}
