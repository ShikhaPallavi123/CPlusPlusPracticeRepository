//
// Created by Shikha Pallavi on 7/12/24.
//
#include<iostream>
using namespace std;

void  factorial(int n){
    if(n == 0){
       return;
    }
    else {
        cout << n << " ";
    }
   factorial(n-1);
}

int main(){
    factorial(10);
    return 0;
}