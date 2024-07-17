//
// Created by Shikha Pallavi on 7/17/24.
//

#include<iostream>
#include<string>
using namespace std;

void removeDuplicate(string str, string ans, int i, int map[]){
    if(i == str.size()){
        cout << "ans: " << ans << endl;
        return;
    }
    char ch = str[i];
    int mapIndex = (int)(ch -'a');

    if(map[mapIndex] == true){
        removeDuplicate( str, ans,  i+1, map);
    }
    else{
        map[mapIndex] = true;
        removeDuplicate( str, ans + str[i],  i+1, map);
    }

}


int main(){
    string str = "appnacollege";
    string ans = "" ;
    int map[26] = {false};
   removeDuplicate(str,ans,0,map);
   return 0;
}