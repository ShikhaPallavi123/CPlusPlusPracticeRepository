//
// Created by Shikha Pallavi on 7/12/24.
//
#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }
     return n * factorial(n-1);
}

int main(){
    int ans = factorial(4);
    cout << "factorial of n is: " << ans << endl;
    return 0;
}