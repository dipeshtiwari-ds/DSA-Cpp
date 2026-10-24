
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    if (n == 0) {
        cout << 1;
        return 0;
    }

    while (n > 0) {
        count++;
        n /= 10;
    }

    cout << count;

    return 0;
}
