#include<iostream>
#include<math.h>
using namespace std;

void RichieRich(){
    int n = 0;
    cin>>n;
    for (int i=0;i<n;i++){
        int A,B,X;
        cin>>A>>B>>X;
        int result = (B-A)/X;
        if (((double)(B-A)/X) > result) {
            cout << result + 1<<endl;
        }
        else cout << result <<endl;
    }
}

void TheTwoDishes(){
    int t = 0;
    cin >> t;
    while (t-->0){
        int N,S;
        cin>>N>>S;
        int t1 = S<N ? S : N;
        int t2 = S - t1;
        cout << abs(t1-t2)<<endl;
    }
}

void VaccineDates(){
    int t = 0;
    cin>>t;
    while (t--){
        int d,l,r;
        cin>>d>>l>>r;
        if (d<l) cout << "Too Early"<<endl;
        else if (d>r) cout <<"Too Late"<<endl;
        else cout <<"Take second dose now"<<endl;
    }
}

void Motivation(){
    int t = 0;
    cin>>t;
    while (t-->0){
        long long int n,x;
        cin>>n>>x;
        long long int maxR = 0;
        bool isFirstTime = true;
        while (n-->0){
            long long int s,r;
            cin>>s>>r;

            if (maxR < r && x >= s) {
                    maxR = r;
            }
        }
        cout << maxR<<endl;
    }
}

void HoopJump(){
    int t = 0;
    cin>>t;
    while (t-->0){
        int n =0 ;
        cin>>n;
        cout << (n/2)+1;
    }
}

void TomAndJerry1(){
    int t = 0;
    cin>>t;
    while (t-->0){
        int a,b,c,d,K;
        cin>>a>>b>>c>>d>>K;
        int m = abs(a-c)+abs(b-d); 
        if (m==K){
            cout << "YES"<<endl;
        }       
        else if (m>K) cout <<"NO"<<endl;
        else {
            K-=m;
            if (K%2!=0) cout << "NO"<<endl;
            else cout <<"YES"<<endl;
        }
    }
}

void ChefInVaccinationQueue(){
    int t = 0;
    cin>>t;
    while (t-->0){
        int n,p,x,y;
        cin>>n>>p>>x>>y;
        int *arr = new int[n];
        
        int res = 0;
        
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        for (int i=0;i<n;i++){
            if (i+1<=p){
                res+=arr[i]==0 ? x:y;
            }
            else break;
        }
        cout << res <<endl;
        delete arr;
    }
}

void ChefAndIPCCertificate(){
    int n,m,k;
    cin>>n>>m>>k;
    int res =0;
    for (int i=0;i<n;i++){
        int *arr = new int[k+1];
        for (int j=0;j<=k;j++){
            cin>>arr[i];
        }

        int sumMinute = 0;
        for (int j=0;j<k;j++){
            sumMinute += arr[j];
        }
        if (sumMinute >= m &&  arr[k]<=10)  res++;
    }
}
//Array


int main(){
    VaccineDates();
}