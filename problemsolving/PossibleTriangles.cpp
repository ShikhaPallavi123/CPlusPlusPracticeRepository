//
// Created by Shikha Pallavi on 7/11/24.
//


/**
* Given an unsorted array of positive integers, find the number of triangles that can be
 * formed with three different array elements as three sides of triangles. For a triangle
 * to be possible from 3 values, the sum of any of the two values (or sides) must be greater
 * than the third value (or third side).
*/
#include<iostream>
#include<algorithm>
using namespace std;


int  findNumberOfTriangle(int arr[], int size){
    sort(arr, arr+size);
    cout << "sorted array is: ";
    for(int i = 0; i < size ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
    int count = 0;
    for(int i = 0; i < size-2; i++){
        for(int j = i+1; j < size-1; j++){
            for(int k = j+1; k < size; k++){
                if(arr[i] + arr[j] > arr[k]){
                    count++ ;

                }

            }
        }
    }
    return count;
}


int main(){
    int arr[] = { 10, 22, 21, 100, 200, 101, 300 };
    int size = sizeof(arr)/sizeof(int);

    int numberOfPosiibleTriangle  = findNumberOfTriangle(arr, size);
    cout << "Total number of possible triangle is :"  << numberOfPosiibleTriangle << endl;
    return 0;
}

