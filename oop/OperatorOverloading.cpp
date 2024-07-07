//
// Class for
// Created by Shikha Pallavi on 7/7/24.
//
#include <iostream>

using namespace std;

class complex {
private:
    int real;
    int imag;
public:
    complex(int r, int i) {
        real = r;
        imag = i;
    }

    void showNum() {
        cout << real << "+" << imag << "i\n";
    }

    // operator overloading
    void operator + (complex &c2){
        int resReal = this->real + c2.real;
        int resImag = this->imag + c2.imag;
        complex c3(resReal, resImag);
        cout << "res = ";
        c3.showNum();

    }

};

int main() {
    complex c1(1,2);
    complex c2(3,4);
    c1.showNum();
    c2.showNum();
    c1 + c2;
    return 0;

}
