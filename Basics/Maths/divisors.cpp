
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> answer;

    for (int value = 1; value <= n; ++value) {
        if (n % value == 0) {
            answer.push_back(value);
        }
    }

    for (int value : answer) {
        cout << value << " ";
    }

    return 0;
}
