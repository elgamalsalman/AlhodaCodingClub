#include <iostream>

using namespace std;

int main() {

    int m, n, low, high, sum;
    cin >> m >> n;
    while (m > 0 && n > 0) {
        if (m > n) {
            low = n;
            high = m;
        } else {
            low = m;
            high = n;
        }

        sum = 0;
        for (int i = low; i <= high; i++) {
            cout << i << ' ';
            sum += i;
        }
        cout << "Sum=" << sum << '\n';

        cin >> m >> n;
    }

    return 0;
}
