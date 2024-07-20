//
// Created by Shikha Pallavi on 7/19/24.
//
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(int nums[], int size) {
        int count = 1;
        for(int i = 1; i < size; i++){
            if(nums[i] != nums[i-1]){
                nums[count] = nums[i];
                count++;
            }

        }
        return count;
    }
};

int main(){
    Solution s1;
    int nums[] = {1, 2, 2, 3, 3, 4, 5, 6, 6, 7};
    int size = sizeof(nums)/sizeof(int);
     int newArrayLength = s1.removeDuplicates(nums, size);
    cout << "number of unique elements in the array are: " << newArrayLength << endl;
    cout << "New array elements are: ";
    for(int i = 0; i < newArrayLength; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}