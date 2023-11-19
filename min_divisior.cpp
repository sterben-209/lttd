// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/
#include <bits/stdc++.h>
using namespace std;

int smallestDivisor(vector<int>& nums, int threshold) {
    int left = 1;
    int right = *std::max_element(nums.begin(), nums.end());

    while (left < right) {
        int mid = left + (right - left) / 2;
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            float tmp = (1.0 * nums[i]) / mid;
            sum += ceil(tmp);
        }

        if (sum <= threshold) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return left;
}

int main() {
    vector<int> nums = {1, 2, 5, 9};
    int threshold = 6;

    cout << smallestDivisor(nums, threshold) << endl;

    return 0;
}
