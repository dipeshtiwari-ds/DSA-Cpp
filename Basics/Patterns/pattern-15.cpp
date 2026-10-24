
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = n; i > 0; i--) {
        char ch = 'A';

        for (int j = 0; j < i; j++) {
            cout << ch;
            ch++;
        }

        cout << endl;
    }

    return 0;
}
