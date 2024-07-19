//
// Created by Shikha Pallavi on 7/19/24.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int count  = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] != val){
                nums[count] = nums[i];
                count++;
            }
        }

        return count;
    }
};

int main(){
    Solution s1;
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    int val = 2;
    int newLength =  s1.removeElement(nums,val);
    cout << "newLength is: " << newLength << endl;

    cout <<  "newNums is: ";
    for(int i = 0; i < newLength; i++){
        cout  << nums[i] << " ";
    }

}