//
// Created by Min on 2021-02-07.
//
#include<iostream>
using namespace std;

int main(void) {
    string s;
    string alphabet ="abcdefghijklmnopqrstuvwxyz";
    cin >> s;
    for(int i = 0; i < alphabet.length(); i++)
        cout << (int)s.find(alphabet[i]) << " ";
    return 0;
}
