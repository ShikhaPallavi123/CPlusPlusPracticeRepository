//
// Created by Shikha Pallavi on 8/12/24.
//

#include<iostream>
#include<stack>
#include<vector>
using namespace std;


void stackSpanProblem(vector<int> &stock,vector<int> &span ){
    stack<int> s;
    s.push(0);
    span[0] = 1;
    for(int i = 0; i < stock.size(); i++){
        int currPrice  = stock[i];
        while(!s.empty() && currPrice >= stock[s.top()]){
            s.pop();
        }
        if(s.empty()){
            span[i] = i+1;
        } else{
            int prevHigh = s.top();
            span[i] = i- prevHigh;
        }
    }
    for(int i = 0; i < stock.size(); i++){
        cout << span[i] << " ";
    }
    cout << endl;
}
 int main(){
     vector<int> stock;
     stock.push_back(100);
     stock.push_back(80);
     stock.push_back(60);
     stock.push_back(70);
     stock.push_back(60);
     stock.push_back(85);
     stock.push_back(100);
     vector<int> span(stock.size(), 0);  // Initialize span with zeros
     stackSpanProblem(stock, span);
     return 0;
}