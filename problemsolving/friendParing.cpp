//
// Created by Shikha Pallavi on 7/17/24.
//
#include<iostream>
using namespace std;

int friendsParing(int n){
    if(n == 1 || n == 2){
        return n;
    }
    return friendsParing(n-1) + (n-1)*friendsParing(n-2);

}
int main(){
    int n;
   cout << "Enter the number of friend :";
   cin >> n;
   cout << "Number of possible pairs are: " << friendsParing(n);
   return 0;
}