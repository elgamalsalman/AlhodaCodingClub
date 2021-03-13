#include <iostream>

using namespace std;

int main () {
	string firstName, lastName; // This can be used to declare multiple variables in one line
	cout << "Please input your first name\n"; // \n starts a new line
	cin >> firstName;
	cout << "Please input your last name" << endl; // and so does endl
	cin >> lastName;
	cout << "Nice to meet you " << firstName << " " << lastName;
}
