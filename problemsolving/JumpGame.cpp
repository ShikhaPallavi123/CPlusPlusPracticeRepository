//
// Created by Shikha Pallavi on 7/11/24.
//

/**
* Given an array arr[] where each element represents the max number of steps that can be made
* forward from that index. The task is to find the minimum number of jumps to reach the end of
* the array starting from index 0.
*/

#include <iostream>
#include <climits> // for INT_MAX
using namespace std;

// Function to return the minimum number of jumps to reach arr[h] from arr[l]
int calculateMinJumps(int arr[], int l, int h) {
    // Base case: when source and destination are the same
    if (h == l)
        return 0;

    // When nothing is reachable from the given source
    if (arr[l] == 0)
        return INT_MAX;

    // Traverse through all the points reachable from arr[l]
    int minJumpsValue = INT_MAX; // Renamed to avoid name conflict
    for (int i = l + 1; i <= h && i <= l + arr[l]; i++) {
        int jumps = calculateMinJumps(arr, i, h); // Recursive call corrected
        if (jumps != INT_MAX && jumps + 1 < minJumpsValue)
            minJumpsValue = jumps + 1;
    }

    return minJumpsValue;
}

// Driver code
int main() {
    int arr[] = { 1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int jumps = calculateMinJumps(arr, 0, n - 1);
    if (jumps != INT_MAX)
        cout << "Minimum number of jumps to reach the end is " << jumps;
    else
        cout << "It is not possible to reach the end of the array";
    return 0;
}
