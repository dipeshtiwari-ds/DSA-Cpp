
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        // Stars
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }

        // Space
        for (int j = 1; j < (2 * (n - i) - 1); j++) {
            cout << " ";
        }

        // Stars
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = 1; i < n; i++) {
        // Stars
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }

        // Space
        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }

        // Stars
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
