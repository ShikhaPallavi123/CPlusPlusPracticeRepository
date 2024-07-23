//
// Created by Shikha Pallavi on 7/22/24.
//
#include<iostream>
using namespace std;

void rotatedArray(int arr[], int size, int k){
    int temp[size];
    k = k % size;
    for(int i = 0; i < size; i++){
        temp[(i+k) % size] = arr[i];
    }

    for(int i = 0; i < size; i++){
        arr[i] = temp[i];
    }
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr)/sizeof(int);
    int k =3;
    rotatedArray(arr,size,k);

}