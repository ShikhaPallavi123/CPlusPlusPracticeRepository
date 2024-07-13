//
// Created by Shikha Pallavi on 7/12/24.
//
#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(vector<int> arr, int target, int i) {
    if (i == arr.size()) {
        return -1;
    }
    if (arr[i] == target) {
        return i;
    }
    return firstOccurrence(arr, target, i + 1);
}

int main() {
    // Using explicit vector constructor
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(3);
    arr.push_back(3);
    arr.push_back(4);

    int target = 3;
    int ans = firstOccurrence(arr, target, 0);
    cout << "First occurrence of target in the array is at index: " << ans << endl;

    return 0;
}
