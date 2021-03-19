#include <iostream>

using namespace std;

int main () {
	double a, b;
	char sign;
	
	cout << "Please write a mathematical expression : ";
	cin >> a >> sign >> b;
	
	if (sign == '+') {
		cout << a + b;
	} else if (sign == '-') {
		cout << a - b;
	} else if (sign == '*') {
		cout << a * b;
	} else {
		cout << a / b;
	}
}
