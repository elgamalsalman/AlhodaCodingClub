#include <iostream>

using namespace std;

int main () {
    bool isPrime = true;
    int num;

    cout << "Input a number : ";
    cin >> num;

    for (int i = 2; i < num; i++) {
        if (num % i == 0) isPrime = false;
    }

    if (isPrime && num > 1) cout << "The number is Prime!\n";
    else cout << "The number isn't Prime :(\n";
}
