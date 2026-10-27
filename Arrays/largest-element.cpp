
#include <iostream>
#include <vector>
using namespace std;

int largestElement(vector<int>& nums) {
    int n = nums.size();
    int largest = nums[0];

    for (int i = 1; i < n; i++) {
        if (nums[i] > largest) {
            largest = nums[i];
        }
    }

    return largest;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << largestElement(nums);

    return 0;
}
