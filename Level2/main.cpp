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
void makeThemEqual(){
    int t =0;
    cin>>t;
    while (t--){
        int n;
        
        cin>>n;
        
        int *arr = new int[n];
        for (int i=0;i<n;i++){
            cin >>arr[i];
        }
        int max = arr[0];
        int min = arr[0];
        for (int i=1;i<n;i++){
            if (max<arr[i]) max = arr[i];
            if (min>arr[i]) min = arr[i];
        }
        
        if (max == min) cout << 0 << endl;
        else {
            cout << max - min << endl;
        }

        delete arr;
    }
}

 void ASubtaskProblem(){
    int t = 0;
    cin>>t;
    while (t--){
        int n = 0, m=0, k=0;
        cin>>n>>m>>k;
        int *arr = new int[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        int rightAnswer = 0;
        int point = 0;
        for (int i=0;i<n;i++){
            if (arr[i]==1){
                rightAnswer++;
                if (i==m-1 && rightAnswer==m){
                    point = k;
                }
                else if (i == n -1 && rightAnswer == n){
                    point = 100;
                }
            }
            
        }
        cout << point << endl;
    } 
}

void ICPCBallons(){
    int t = 0;
    cin>>t;
    while (t--){
        int n ;
        cin>>n;
        int *arr = new int[n];
        int res = 0;
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        for (int i=0;i<n;i++){
            if ((arr[i]>=1 && arr[i]<=7) || res < 7){
                res++;
            }
        }
        cout<<res<<endl;
    }
}


void GasolineIntroduction(){
    int t = 0;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int *arr=new int[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        int distance = n-1;
        for (int i=1;i<n;i++){
            arr[0]+=arr[i]-1;
        }
        distance += arr[0];

        cout<<distance<<endl;        
        delete arr;
    }
}

void HardCard(){
    int t = 0;
    cin>>t;
    while (t--){
        int n,k;
        cin>>n>>k;
        int *arr = new int[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        int reminder = 0;

        for (int i=0;i<n-1;i++){
            reminder+=arr[i]%k;
            arr[i]-=arr[i]%k;
        }

        cout << reminder % k << endl;
    }
}

void Carvans(){
    int t = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (t--){
        int n;
        cin>>n;
        long * speeds = new long[n];
        for (int i=0;i<n;i++){
            cin>>speeds[i];
        }
        int res = 1;
        for (int i=1;i<n;i++){
            if (speeds[i]>speeds[i-1]) speeds[i] = speeds[i-1];
            else res++;
        }
        cout<<res<<endl;
    }
}

void AverageFlex(){
    int t = 0;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int *points = new int[n];

        for (int i=0;i<n;i++){
            cin>>points[i];
        }
        int res = 0;
        for (int i=0;i<n;i++){
            int LessOrEqual[100]{};

            if (LessOrEqual[points[i]]==0){
                for (int j=0;j<n;j++){
                    if (i!=j && points[i]>=points[j]) LessOrEqual[points[i]]++;
                }
            }

            if (n - LessOrEqual[points[i]] - 1 < LessOrEqual[points[i]]) res++;
        }
        cout<<res<<endl;
        delete points;
    }
}

void CollegeLife2(){
    int t = 0;
    cin>>t;
    while (t--){
        
        int s;
        long total = 0;
        cin>>s;
        int* Q = new int[s];
        for (int i=0;i<s;i++){
            cin>>Q[i];
        }
        int **L = new int*[s];

        for (int i=0;i<s;i++){
            int e = 0;
            cin>>e;
            L[i] =  new int[e+1];
            L[i][0] = e;
            for (int j=1;j<e+1;j++){
                cin>>L[i][j];
                if (j==1) total += L[i][j];
                else {
                    total += L[i][j] - Q[i];
                }
            }
        }

        cout << total << endl;
    } 
}

void NobelPrize(){
    int t = 0;
    cin>>t;
    while (t--){
        int n,m;
        cin>>n>>m;
        
        int *researcher = new int[m+1]{0};
        
        for (int i=0;i<n;i++){
            int x;
            cin>>x;
            researcher[x]++;
        }
        bool isAvailable = false;
        for (int i=1;i<=m;i++){
            if (researcher[i]==0) {
                isAvailable = true;
                break;
            }
        }        

        if (isAvailable) cout<<"YES"<<endl;
        else cout << "NO" <<endl;

        delete researcher;
    }
}

void CodeAndTheThiefDevu(){
    int t = 0;
    cin>>t;
    while (t--){
        int m,x,y;
        cin>>m>>x>>y;
        int numberCover = x*y;
        int houses[101]{0}; 
        for (int i = 0;i<m;i++){
            int occupied = 0;
            cin>>occupied;
            int left = occupied <= numberCover ? 1 : occupied - numberCover;
            int right = occupied + numberCover > 100  ? 100: numberCover + occupied;
            for (int j=left;j<=right;j++){
                houses[j]=1;
            }
        } 
        int res = 0;
        for (int i=1;i<=100;i++){
            if (houses[i]==0) res++; 
        }  
        cout<<res<<endl;
    }
}

int main(){
    CollegeLife2();
    return 1;
}   