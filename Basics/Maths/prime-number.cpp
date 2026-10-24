
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 1) {
        cout << "false";
        return 0;
    }

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << "false";
            return 0;
        }
    }

    cout << "true";
    return 0;
}
