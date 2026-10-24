
#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    if (n1 == 0 || n2 == 0) {
        cout << 0;
        return 0;
    }

    long long a = n1 < 0 ? -(long long)n1 : n1;
    long long b = n2 < 0 ? -(long long)n2 : n2;

    long long x = a;
    long long y = b;

    while (y != 0) {
        long long remainder = x % y;
        x = y;
        y = remainder;
    }

    cout << static_cast<int>((a / x) * b);

    return 0;
}
