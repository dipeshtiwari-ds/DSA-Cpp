
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int oddcount = 0;

    while (n > 0) {
        int digit = n % 10;

        if (digit % 2 != 0) {
            oddcount++;
        }

        n /= 10;
    }

    cout << oddcount;

    return 0;
}
