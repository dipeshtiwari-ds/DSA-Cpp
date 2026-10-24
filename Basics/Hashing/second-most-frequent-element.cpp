
#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    unordered_map<int, int> freq;

    for (int i = 0; i < nums.size(); i++) {
        freq[nums[i]]++;
    }

    int largestFreq = 0;
    int largestFreqDig = INT_MAX;
    int secondLargestFreq = 0;
    int secondLargestFreqDig = INT_MAX;

    for (auto it : freq) {
        int digit = it.first;
        int count = it.second;

        if (count > largestFreq) {
            secondLargestFreq = largestFreq;
            secondLargestFreqDig = largestFreqDig;

            largestFreq = count;
            largestFreqDig = digit;
        }
        else if (count == largestFreq) {
            largestFreqDig = min(largestFreqDig, digit);
        }
        else if (count > secondLargestFreq) {
            secondLargestFreq = count;
            secondLargestFreqDig = digit;
        }
        else if (count == secondLargestFreq) {
            secondLargestFreqDig = min(secondLargestFreqDig, digit);
        }
    }

    if (secondLargestFreq == 0) {
        cout << -1;
    } else {
        cout << secondLargestFreqDig;
    }

    return 0;
}
