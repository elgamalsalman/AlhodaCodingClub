#include <iostream>

using namespace std;

int main () {
    // Take care not to add -1 to the total.
    // This can be prevented in multiple ways, here is one.

    // initializing total to 0 is important
    double total = 0, cost;

    cout << "Input -1 to terminate\n";
    while (cost != -1) {
        total += cost;
        cout << "Input the price of an item : ";
        cin >> cost;
    }

    cout << "Total is " << total << '\n';
}
