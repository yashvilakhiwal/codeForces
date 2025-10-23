#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    int move=0;
    for(int i=0;i<t.size();i++){
        if(s[move]==t[i]){
            move++;
        }
    }
    cout<<move+1<<endl;
    return 0;
}