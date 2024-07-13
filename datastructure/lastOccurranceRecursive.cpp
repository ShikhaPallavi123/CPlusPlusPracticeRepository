//
// Created by Shikha Pallavi on 7/12/24.
//
#include <iostream>
#include <vector>
using namespace std;

int lastOccurrence(vector<int> arr, int target, int i) {
    if (i == arr.size()) {
        return -1;
    }

  int indexFound  = lastOccurrence(arr, target, i+1 );
    if(indexFound == -1 && arr[i] == target){
        return i;
    }
    return indexFound;
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
   int ans = lastOccurrence(arr, target, 0);
    cout << "last occurrence of target in the array is at index: " << ans << endl;

    return 0;
}
