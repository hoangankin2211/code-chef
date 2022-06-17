#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int T = 0;
    cin>>T;
    cin.ignore();
	while (T-->0){
	    char a;
        cin>>a;
        cin.ignore();
	    if (a=='B' || a =='b') cout<< "BattleShip"<<endl;
	    else if (a=='c' || a=='C') cout<<"Cruiser"<<endl;
	    else if (a=='D' || a=='d') cout<<"Destroyer"<<endl;
	    else if (a=='f' || a=='F') cout<<"Frigate"<<endl;
	}
	return 0;
}
