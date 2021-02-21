//
// Created by Min on 2021-02-21.
//

#include <iostream>

using namespace std;

int main() {

    int N,m,mod,result;
    cin>>N;
    m=N/5;
    while(m>=0){
        mod=0;
        result=0;
        if(m>0){
            mod=N-5*m;
            result=m;
        }else{
            mod=N;
        }

        result += mod/3;
        mod=mod%3;
        if(mod==0){
            cout<<result;
            break;
        }
        m--;
    }
    if(mod!=0){
        cout<<-1;
    }

}