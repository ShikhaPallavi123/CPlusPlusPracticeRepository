//
// Created by Shikha Pallavi on 7/12/24.
//
#include<iostream>
using namespace std;

bool isSorted(int arr[], int n, int i) {

    if (i == n - 1) {
        return true;
    }
    if (arr[i] > arr[i + 1]) {
        return false;
    }
    return isSorted(arr, n, i + 1);

}



int main(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {1,2,3,5,4};

    cout << boolalpha;
    cout << isSorted(arr1, 5, 0) << endl;
    cout << boolalpha;
    cout << isSorted(arr2, 5, 0) << endl;
    return 0;
}