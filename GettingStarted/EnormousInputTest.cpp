#include<iostream>
using namespace std;

int main(){
    int *arr = NULL;
    int n = 0, k = 0;
    cin >> n;
    cin >> k;
    arr = new int[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }    
    int res = 0;
    for (int i=0;i<n;i++){
        if (arr[i]%k==0) res++;
    }
    cout<<res;
}