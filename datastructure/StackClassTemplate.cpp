//
// Created by Shikha Pallavi on 8/11/24.
//
#include<iostream>
#include<vector>
#include<string>
using namespace std;

//create stack using vector
template <class T>
class Stack{
    vector<T> vec;
public:
    void push(T val){
        vec.push_back(val);
        cout << val << " ";
    }
    bool isEmpty(){
        return vec.size() == 0;
    }

    void pop(){
        if(isEmpty()){
            cout << "Stack is Empty\n";
            return;
        }
        vec.pop_back();
    }

    T top(){
        if(isEmpty()){
            cout << "Stack is empty\n";
            return -1;
        }
        T lastIdx = vec.size()-1;
        return vec[lastIdx];
    }

};

int main(){
    Stack<char> s;
    s.push('c');
    s.push('b');
    s.push('a');
    cout << endl;
    while(!s.isEmpty()){
        cout << s.top() << " ";
        s.pop();
    }
}