#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <cstdint>
#include <cassert>
#include <climits>
#include <cstring>

using namespace std;

void mergesort(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void MS(vector<int> &arr, int low, int high) {
    if (low >= high) return;
    int mid = low + (high - low) / 2;
    MS(arr, low, mid);
    MS(arr, mid + 1, high);
    mergesort(arr, low, mid, high);
}

int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10, 19, 50};
    int n = arr.size();
    MS(arr, 0, n - 1);

    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
