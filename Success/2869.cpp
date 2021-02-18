//
// Created by Min on 2021-02-18.
//

#include <iostream>

using namespace std;

int main() {
    int a,b,v;
    int up=0;

    cin>>a>>b>>v;

    up = (v-b-1)/(a-b)+1;

    cout << up << endl;
}