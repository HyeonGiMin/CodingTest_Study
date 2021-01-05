//
// Created by Min on 2020-12-27.
//

#include<iostream>
using namespace std;

int main(void){
    int N,M;
    int mid,min=0,max=0,ret=0;
    long long sum;
    cin>>N>>M;
    long long trees[N];
    for(int i=0;i<N;i++){
        cin>>trees[i];
        if(max<trees[i]){
            max=trees[i];
        }
    }

    while(min<=max){
        mid=(min+max)/2;
        sum=0;
        for(int j=0;j<N;j++){
            if(trees[j]>mid) {
                sum += (trees[j] - mid);
            }
        }
        if(sum>=M){
            if(ret<mid){
                ret=mid;
            }
            min=mid+1;
        }else{
            max=mid-1;
        }
    }
    cout<<ret;
}