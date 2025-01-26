// PREVIOUS QUESTION(BY SHRADDHA MAM)

#include<iostream>
#include<vector>
using namespace std;

int PEAKINDEX(vector<int> nums) {
    int st = 0, end = nums.size() - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        // Check if mid is the peak element
        if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) {
            return mid;
        }
        // If the left element is greater, move to the left side
        else if (nums[mid] > nums[mid - 1]) {
            st = mid + 1;
        }
        // If the right element is greater, move to the right side
        else {
            end = mid - 1;
        }
    }

    return -1; // This line will never be reached in a valid peak mountain array
}

int main() {
    vector<int> nums = {0, 3, 8, 9, 5, 2};
    cout << "PEAK INDEX: " << PEAKINDEX(nums) << endl;
    return 0;
}

