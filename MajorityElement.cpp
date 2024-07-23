//
// Created by Shikha Pallavi on 7/22/24.
//
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int element = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (count == 0) {
                element = nums[i];
                count = 1;
            } else if (element == nums[i]) {
                count++;
            } else {
                count--;
            }
        }

        return element;
    }
};
int main(){
    Solution s1;
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    cout << s1.majorityElement(nums);
    return 0;
}
