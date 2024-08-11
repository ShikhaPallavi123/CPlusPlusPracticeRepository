//
// Created by Shikha Pallavi on 8/10/24.
//
#include<iostream>
#include<vector>
using namespace std;

class Stack{
    vector<int> vec;
public:
    void push(int val){
        vec.push_back(val);
        cout << val << " ";
    }

};

int main(){
    Stack ss;
    ss.push(3);
    ss.push(2);
    ss.push(1);

    return 0;
}

