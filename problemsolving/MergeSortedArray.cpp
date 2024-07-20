//
// Created by Shikha Pallavi on 7/19/24.
//
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int j = 0, i = m; j<n; j++){
            nums1[i] = nums2[j];
            i++;
        }
        sort(nums1.begin(),nums1.end());

    }

};

int main(){
    Solution s1;
    vector<int> nums1;
    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(3);
    nums1.push_back(0);
    nums1.push_back(0);
    nums1.push_back(0);
    int m = 3;

    vector<int> nums2;
    nums2.push_back(2);
    nums2.push_back(5);
    nums2.push_back(6);
    int n = nums2.size();
  s1.merge(nums1, m, nums2, n);
  cout << "merged array is: ";
    for(int i = 0; i < m+n; i++){
        cout << nums1[i] << " ";
    }
  return 0;
}