//
// Created by Min on 2021-02-07.
//
#include<iostream>
using namespace std;

int main(void) {
    int count;
    int total=0;
    char num;
    cin>>count;
    for(int i=0;i<count;i++){
        cin>>num;
        total+=(num-'0');
    }
    cout<<total;
}