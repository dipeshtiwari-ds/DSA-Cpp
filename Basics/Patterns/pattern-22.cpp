
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < (2 * n - 1); i++) {
        for (int j = 0; j < (2 * n - 1); j++) {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - left;
            int bottom = (2 * n - 2) - top;

            int distance = min(min(top, left), min(right, bottom));

            cout << n - distance << " ";
        }

        cout << endl;
    }

    return 0;
}
