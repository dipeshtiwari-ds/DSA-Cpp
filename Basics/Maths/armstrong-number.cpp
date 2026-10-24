
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num = n, temp = n;
    int sum = 0;
    int digits = 0;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    while (num > 0) {
        int digit = num % 10;
        sum = sum + pow(digit, digits);
        num /= 10;
    }

    if (sum == n)
        cout << "true";
    else
        cout << "false";

    return 0;
}
