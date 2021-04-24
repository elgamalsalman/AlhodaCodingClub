#include <iostream>

using namespace std;

int main() {
    int a, b, sum = 0;
    cin >> a >> b;

    for (int i = b + 1; i < a; i++) {
        if (i % 2 == 1 || i % 2 == -1) sum += i;
    }
    cout << sum << '\n';
}
