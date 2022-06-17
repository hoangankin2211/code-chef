#include<iostream>
using namespace std;

int main(){
    int T = 0;
    cin>>T;
    for (int i=0;i<T;i++){
        int A = 0, B = 1;
        cin>>A;
        cin>>B;
        cout<<A%B<<endl;
    }
    return 0;
}