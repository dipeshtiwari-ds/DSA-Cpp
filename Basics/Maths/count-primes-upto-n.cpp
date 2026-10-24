
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int primecount = 0;

    for (int i = 2; i <= n; i++) {
        bool isprime = true;

        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isprime = false;
                break;
            }
        }

        if (isprime == true) {
            primecount = primecount + 1;
        }
    }

    cout << primecount;

    return 0;
}
