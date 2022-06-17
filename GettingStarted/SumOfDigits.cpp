#include<iostream>
using namespace std;

int main(){
    int T = 0;
    cin>>T;
    for (int i=0;i<T;i++){
        int N = 0;
        cin>>N;
        int sum = 0;
        while (N!=0){
            sum+=N%10;
            N/=10;
        }
        cout<<sum<<endl;
    }
}