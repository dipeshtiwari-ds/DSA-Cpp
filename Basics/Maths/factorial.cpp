
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int fact = 1;

    if (n == 0 || n == 1) {
        cout << 1;
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    cout << fact;

    return 0;
}
