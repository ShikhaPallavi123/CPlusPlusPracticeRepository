//
// Created by Shikha Pallavi on 7/10/24.
//
#include<iostream>
using namespace std;

class A{
public:
    int a = 0;
    int b = 1;
    void func(){
        cout << "class A: " << endl;
    }

};

class B : public A{
public:
    int p = 0;
    int q = 1;
    void function(){
        cout << "class B inherits A's properties: " << endl;
    }

};

int main(){

    B b1;
    b1.func();

}
