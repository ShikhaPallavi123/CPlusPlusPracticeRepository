//
// Created by Shikha Pallavi on 7/17/24.
//

//Write a recursive function to perform BinarySearch.
// Input:arr[]={1,2,3,4,5,6,7},n=7,key=5 Output:4(index of key)
// Use the starting index & ending index logic used in rotated,sorted array
#include<iostream>
using namespace std;

int binarysearch(int arr[], int si, int ei, int key){
    if(si > ei){
        return -1;
    }
    int mid = (si +ei)/2;
    if(arr[mid] == key){
        return mid;
    }
    else if(arr[mid] > key){
       return binarysearch( arr,  si,  mid-1, key);
    }
    else{
        return binarysearch( arr,mid+1,ei, key);
    }



}

int main(){
   int arr[]={1,2,3,4,5,6,7};
   int size = 7;
   int key = 5;
    cout << "key found at the index: " << binarysearch(arr,0,6, key);
    return 0;
}