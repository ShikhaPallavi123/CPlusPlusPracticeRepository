//
// Created by Shikha Pallavi on 7/16/24.
//

//count total number of ways to tile a floor (2*n) with tiles(2*1)

#include<iostream>
using namespace std;

int tilingProblem(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    int ans1 = tilingProblem(n - 1);
    int ans2 = tilingProblem(n - 2);
    return ans1 + ans2;
}
int main(){
    int n = 5;
    cout << "Number of ways: " << tilingProblem(n) << endl;
    return 0;

}