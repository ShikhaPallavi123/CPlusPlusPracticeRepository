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
        cout  <<  val << " ";
    }

    void pop(){
        if(isEmpty()){
            cout << "Stack is empty.\n";
            return;
        }
        vec.pop_back();
    }

    int top(){
        if(isEmpty()){
            cout << "Stack is empty\n";
            return -1;
        }
        int lastIdx = vec.size() -1;
        return vec[lastIdx];
    }

    bool isEmpty(){
        return vec.size() == 0;
    }

};

int main(){
    Stack s;
    cout <<  "Pushed: ";
    s.push(3);
    s.push(2);
    s.push(1);
    cout << endl;
    cout <<  "Poped: ";
    while(!s.isEmpty()){
        cout  <<  s.top() << " ";
        s.pop();
    }
    return 0;
}


