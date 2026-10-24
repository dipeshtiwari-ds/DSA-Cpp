#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int org_num = n;
    int revnum = 0;

    while (n > 0) {
        int digit = n % 10;
        revnum = revnum * 10 + digit;
        n /= 10;
    }

    if (org_num == revnum)
        cout << "true";
    else
        cout << "false";

    return 0;
}
