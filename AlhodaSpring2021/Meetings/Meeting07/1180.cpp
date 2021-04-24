#include <iostream>

using namespace std;

int main() {

    int N;
    cin >> N;

    int X[N];

    for (int i = 0; i < N; i++) {
        cin >> X[i];
    }

    int low = 1000000, ind;
    for (int i = 0; i < N; i++) {
        if (X[i] < low) {
            low = X[i];
            ind = i;
        }
    }

    cout << "Menor valor: " << low << '\n';
    cout << "Posicao: " << ind << '\n';

    return 0;
}
