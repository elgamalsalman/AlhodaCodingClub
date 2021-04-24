#include <iostream>

using namespace std;

int main () {
    double total = 0, cost;
    int num;

    cout << "Please input the number of items : ";
    cin >> num;

    for (int i = 0; i < num; i++) {
        cout << "Input an item : ";
        cin >> cost;
        total += cost;
    }

    cout << "Total is " << total << '\n';
}
