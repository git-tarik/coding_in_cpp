#include <iostream>
using namespace std;

int main() {
    int n = 4; // number of rows in the top half (including the middle row)

    // top half (including middle)
    for (int i = 1; i <= n; ++i) {
        // leading spaces
        for (int s = 0; s < n - i; ++s) cout << ' ';

        if (i == 1) {
            cout << "*\n";
        } else {
            cout << '*';
            for (int s = 0; s < 2 * i - 3; ++s) cout << ' ';
            cout << "*\n";
        }
    }

    // bottom half
    for (int i = n - 1; i >= 1; --i) {
        for (int s = 0; s < n - i; ++s) cout << ' ';

        if (i == 1) {
            cout << "*\n";
        } else {
            cout << '*';
            for (int s = 0; s < 2 * i - 3; ++s) cout << ' ';
            cout << "*\n";
        }
    }

    return 0;
}
