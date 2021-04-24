#include <iostream>

using namespace std;

int main() {

    int N;
    cin >> N;

    int fib[N];

    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < N; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = 0; i < N; i++) {
        if (i) cout << ' ';
        cout << fib[i];
    }

    cout << '\n';

    return 0;
}
