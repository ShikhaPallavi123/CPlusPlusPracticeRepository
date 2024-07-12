//
// Created by Shikha Pallavi on 7/11/24.
//

/**
 * Given an array of integers, write a function that returns true if there is a triplet (a, b, c)
 * that satisfies a2 + b2 = c2. Also provide the time and space complexity of the solution.
 */



#include<iostream>
#include<algorithm>
using namespace std;


bool  findNumberOfTriangle(int arr[], int size){
    sort(arr, arr+size);
    cout << "sorted array is: ";
    for(int i = 0; i < size ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;

    for(int i = 0; i < size-2; i++){
        for(int j = i+1; j < size-1; j++){
            for(int k = j+1; k < size; k++){
                if(((arr[i]*arr[i]) + (arr[j]*arr[j])) == (arr[k]*arr[k])){
                    cout << arr[i] << " , " << arr[j] << " and " << arr[k] << endl;
                    return true;
                }

            }
        }

    }

    return true;
}


int main(){
    int arr[] =  {3, 2, 4, 6, 5};
    int size = sizeof(arr)/sizeof(int);

    bool triplet  = findNumberOfTriangle(arr, size);
    cout << boolalpha;
    cout << triplet;

    return 0;
}
