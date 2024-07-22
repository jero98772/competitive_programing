#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxSubArray(const vector<int>& nums) {
    if (nums.empty()){
        return 0;
    }
    int max_current=nums[0];
    int max_global=nums[0];
    for(int i =1; i<nums.size(); i++){
        max_current=max(nums[i],max_current+nums[i]);
        max_global=max(max_current,max_global);
    }

    return max_global;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, 5, -4};

    int result = maxSubArray(nums);
    cout << "The maximum subarray sum is: " << result << endl;

    return 0;
}
