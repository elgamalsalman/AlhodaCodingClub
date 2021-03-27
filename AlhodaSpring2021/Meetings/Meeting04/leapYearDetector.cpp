#include <iostream>

using namespace std;

int main () {
	int year;

	cout << "Please input a year : ";
	cin >> year;

	// leap year conditions :
	// 	divisible by 4 but not divisible by 100
	// 	or divisible by 400

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		cout << "This is a leap year\n";
	} else {
		cout << "This is not a leap year\n";
	}
}
