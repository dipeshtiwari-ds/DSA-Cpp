
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargestElement(vector<int>& nums) {
    int n = nums.size();

    if (n < 2) {
        return -1;
    }

    int largest = nums[0];
    int secondLargest = INT_MIN;
    bool found = false;

    for (int i = 1; i < n; i++) {
        if (nums[i] > largest) {
            secondLargest = largest;
            largest = nums[i];
            found = true;
        }
        else if (nums[i] < largest &&
                 (!found || nums[i] > secondLargest)) {
            secondLargest = nums[i];
            found = true;
        }
    }

    if (found) {
        return secondLargest;
    }

    return -1;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << secondLargestElement(nums);

    return 0;
}
