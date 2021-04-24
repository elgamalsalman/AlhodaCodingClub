#include <iostream>

using namespace std;

int main() {
    long long T, N, curr, next, tmp;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N;
        curr = 0; next = 1;
        for (int i = 0; i < N; i++) {
            tmp = curr;
            curr = next;
            next += tmp;
        }
        cout << "Fib(" << N << ") = " << curr << '\n';
    }

    return 0;
}
