//
// Created by Min on 2021-02-19.
//
#include <iostream>

using namespace std;
int main(){
    int t,h,w,n;
    cin>>t;

    for(int i=0;i<t;i++){
        cin>>h>>w>>n;
        int Y=n/h;
        int X=n%h;

        if(X>0){
            Y++;
        }else{
            X=h;
        }
        cout<<X*100+Y<<endl;
    }
}
