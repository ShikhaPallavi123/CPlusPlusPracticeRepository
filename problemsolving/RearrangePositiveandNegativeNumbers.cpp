//
// Created by Shikha Pallavi on 7/11/24.
//
/**
 * An array contains both positive and negative numbers in random order.
 * Rearrange the array elements so that positive and negative numbers
 * are placed alternatively. A number of positive and negative numbers
 * need not be equal. If there are more positive numbers they appear at
 * the end of the array. If there are more negative numbers, they too
 * appear at the end of the array.
 */
#include <iostream>
using namespace std;

// Utility function to right rotate all elements between [outofplace, cur]
void rightrotate(int arr[], int outofplace, int cur) {
    int tmp = arr[cur];
    for (int i = cur; i > outofplace; i--) {
        arr[i] = arr[i - 1];
    }
    arr[outofplace] = tmp;
}

void rearrange(int arr[], int n) {
    int outofplace = -1; // Initializing outofplace to -1

    for (int index = 0; index < n; index++) {
        // If there is an out-of-place element
        if (outofplace >= 0) {
            // Check if the current element can be swapped with the out-of-place element
            if (((arr[index] >= 0) && (arr[outofplace] < 0)) ||
                ((arr[index] < 0) && (arr[outofplace] >= 0))) {
                rightrotate(arr, outofplace, index);

                // Move outofplace to the next position to fix, if possible
                if (index - outofplace >= 2) {
                    outofplace += 2;
                } else {
                    outofplace = -1;
                }
            }
        }

        // Identify the out-of-place element
        if (outofplace == -1) {
            // Check if current entry is out-of-place based on its position
            if (((arr[index] >= 0) && (index % 2 == 0)) ||
                ((arr[index] < 0) && (index % 2 != 0))) {
                outofplace = index;
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = { -5, -2, 5, 2, 4, 7, 1, 8, 0, -8 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is:\n";
//    printArray(arr, n);

    // Function call
    rearrange(arr, n);

    cout << "Rearranged array is:\n";
    printArray(arr, n);

    return 0;
}
