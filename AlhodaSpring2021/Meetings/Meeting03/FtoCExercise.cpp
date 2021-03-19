#include <iostream>

using namespace std;

int main () {
	double temp;
	cout << "Please input the temperature in Fahrenheit : ";
	cin >> temp;
	cout << "The temperature in Celsius is " << (temp - 32) * 5.0 / 9.0;
}
