//
// Created by Shikha Pallavi on 7/17/24.
//
//For a given integer array of size N.You have to find all the occurrences(indices) of a given
// element(Key) and print them.Use a recursive function to solve this problem.
// Sample Input:arr[]={3,2,4,5,6,2,7,2,2},key=2Sample Output:1578

#include<iostream>
using namespace std;

void printOccurrences(int arr[], int size,int i, int key){
    if(i == size){
        return;
    }
    if(arr[i] == key){
        cout << i << " " ;
    }

    printOccurrences(arr, size, i+1, key);
}
int main(){
    int arr[]={3,2,4,5,6,2,7,2,2};
    int size = sizeof(arr)/sizeof(int);
    int key = 2;
    printOccurrences(arr, size,0,key);
}