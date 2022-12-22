#include<iostream>
#include<string>
using namespace std;

void PawriMeme(){
    int t = 0;
    cin>>t;
    cin.ignore();
    while (t--){
        string input;
        getline(cin,input);
        int index = input.find("party");
        while (index!=string::npos){
            input.replace(index,index+5,"pawri");
            index = input.find("party");
        }
        cout << input <<endl;        
    }
}

int main(){
    PawriMeme();
    return 1;
}