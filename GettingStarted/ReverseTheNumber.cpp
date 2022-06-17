#include<iostream>
using namespace std;

int main(){
    int T = 0;
    cin>>T;
    while (T-->0){
        int N = 0 ;
        cin>>N;
        int res = 0;
        while (N!=0){
            res=res*10+N%10;
            N/=10;
        }
        cout<<res<<endl;
    }
}