#include<iostream>
#include<set>
using namespace std;
int main(){
    string s;
    cin>>s;
    set<char> distinct_chars;
    for(int i=0;i<s.length();i++){
        distinct_chars.insert(s[i]);
    }
    int x;
    x=distinct_chars.size();
    if(x%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else if(x%2!=0){
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}