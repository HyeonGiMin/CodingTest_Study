//
// Created by Min on 2021-02-13.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
    vector<string> Croatia = {{"c="},{"c-"},{"dz="},{"d-"},{"lj"},{"nj"},{"s="},{"z="}};
    int idx;
    string str;
    cin>>str;

    for(int i=0;i<Croatia.size();i++){
        while(1){
            idx=str.find(Croatia[i]);
            if(idx==string::npos){
                break;
            }
            str.replace(idx,Croatia[i].length(),"@");
        }
    }
    cout<<str.length();
}