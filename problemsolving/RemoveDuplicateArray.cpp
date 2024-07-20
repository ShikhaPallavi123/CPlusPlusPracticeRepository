//
// Created by Shikha Pallavi on 7/19/24.
//
/**
* Given an integer array nums sorted in non-decreasing order,
 * remove some duplicates in-place such that each unique element
 * appears at most twice. The relative order of the elements should be kept the same.
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 1;
        for(int i = 1; i < nums.size(); i++){
            if(count == 1 || nums[i] != nums[count -2]){
                nums[count] = nums[i];
                count++;
            }


        }
        return count;
    }
};

int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);

    Solution s1;
    int newArrayLength = s1.removeDuplicates(nums);
    cout << "new length of the array is: " << newArrayLength << endl;
    cout << "New elements of array are: ";
    for(int i = 0; i< newArrayLength; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;

}