
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Number
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // Space
        for (int j = 1; j < (2 * (n - i) + 1); j++) {
            cout << " ";
        }

        // Number
        for (int j = i; j > 0; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}
