#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T = 0;
	while (T-->0){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if (a+b<=c || a+c<=b || b+c<=a) cout <<"YES"<<endl;
        else cout<<"NO"<<endl;
	}
	return 0;
}
