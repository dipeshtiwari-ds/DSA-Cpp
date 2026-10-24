
#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Hash map: count frequency of each element
    unordered_map<int, int> freq;

    for (int i = 0; i < nums.size(); i++) {
        freq[nums[i]]++;
    }

    int largestFreq = 0;
    int largestFreqDig = INT_MAX;

    for (auto it : freq) {
        if (it.second > largestFreq) {
            largestFreq = it.second;
            largestFreqDig = it.first;
        }
        else if (it.second == largestFreq &&
                 it.first < largestFreqDig) {
            largestFreqDig = it.first;
        }
    }

    int smallestfreq = largestFreq;

    for (auto it : freq) {
        if (it.second < smallestfreq) {
            smallestfreq = it.second;
        }
    }

    cout << largestFreq + smallestfreq;

    return 0;
}
