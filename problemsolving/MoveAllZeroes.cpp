//
// Created by Shikha Pallavi on 7/11/24.
//


/**
* Given an array of random numbers, Push all the zero’s of a given array to the end of the array.
 * For example, if the given arrays is {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0}, it should be changed
 * to {1, 9, 8, 4, 2, 7, 6, 0, 0, 0, 0}. The order of all other elements should be same.
 * Expected time complexity is O(n) and extra space is O(1).
*/
#include<iostream>
using namespace std;

void moveZero(int arr[], int size){
    int nonZeroIndex = 0;
    for(int i = 0; i < size; i++){

        if(arr[i] !=0){
            swap(arr[nonZeroIndex] , arr[i]);
            nonZeroIndex++;
        }
    }

}

int main(){
    int arr[] = {1,9,8,4,0,0,2,7,0,6,0};
    int size = sizeof(arr)/sizeof(int);
    moveZero(arr,size);
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}