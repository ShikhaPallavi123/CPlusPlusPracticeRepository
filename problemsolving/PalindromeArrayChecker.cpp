//
// Created by Shikha Pallavi on 7/12/24.
//
/**
* Check if given array is palindrome or not
*/

#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(int);
    bool isPalindrome = true;

    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "The array is a palindrome" << endl;
    } else {
        cout << "The array is not a palindrome" << endl;
    }

    return 0;
}
