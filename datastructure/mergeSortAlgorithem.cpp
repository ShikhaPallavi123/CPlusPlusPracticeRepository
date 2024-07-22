//
// Created by Shikha Pallavi on 7/21/24.
//
#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> arr, int n){
    cout << "sorted elements of the array are: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void merge(vector<int> arr, int mid, int si, int ei){
    vector<int> temp;
    int i = si;
    int j = mid+1;

   while(i <= mid && j <= ei) {
       if (arr[i] <= arr[j]) {
           temp.push_back(arr[i]);
       } else {
           temp.push_back(arr[j]);
       }
   }

       while(i <= mid){
           temp.push_back(arr[i++]);
       }
       while(j <= ei){
           temp.push_back(arr[j++]);
       }
       for(int idx = si,  x=0;  idx <= ei; idx++){
            arr[idx] = temp[x++];
       }


}

void mergeSort(vector<int> arr, int si, int ei){
    if(si >= ei){
       return;
    }
    int mid = si + ei/2;
    mergeSort(arr,si,mid); //left half
    mergeSort(arr,mid+1, ei); // right half
    merge(arr,mid, si,ei); // combine

}

int main(){
    vector<int> arr ;
    arr.push_back(6);
    arr.push_back(3);
    arr.push_back(7);
    arr.push_back(5);
    arr.push_back(2);
    arr.push_back(4);

    int n = arr.size();
    mergeSort(arr,0,n-1);
    print(arr,n);
    return 0;
}


