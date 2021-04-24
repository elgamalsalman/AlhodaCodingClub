#include <iostream>

using namespace std;

int main () {
    double total = 0, cost;
    int num;

    cout << "Please input the number of items : ";
    cin >> num;

    int counter = 0;
    while (counter < num) {
        cout << "Input an item : ";
        cin >> cost;
        total += cost;
        counter++;
    }

    cout << "Total is " << total << '\n';
}
