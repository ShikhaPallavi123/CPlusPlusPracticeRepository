//
// Created by Shikha Pallavi on 8/16/24.
//
#include<iostream>
#include<string>
#include<vector>
#include<stack>
using namespace std;

void nextGreater(vector<int> arr, vector<int> ans){
    stack<int> s;
    int idx = arr.size() - 1;
    ans[idx] = -1;
    s.push(arr[idx]);

    for(idx = idx-1; idx >= 0; idx--){
        int curr = arr[idx];
        while(!s.empty() && curr >= s.top()){
            s.pop();
        }
        if(s.empty()){
            ans[idx] = -1;
        }else{
            ans[idx] = s.top();
        }
        s.push(curr);
    }

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> stock;
    stock.push_back(6);
    stock.push_back(8);
    stock.push_back(0);
    stock.push_back(1);
    stock.push_back(3);

    vector<int> span(stock.size(), 0);

    nextGreater(stock,span);
    return 0;
}