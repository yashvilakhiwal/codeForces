#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int c=0,l=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>=65 && s[i]<=90){
            c++;
        }
        else{
            l++;
        }
    }
        for(int i=0;i<s.length();i++){
           if(c>l)
             s[i]=toupper(s[i]);
           else if(l>=c)
             s[i]=tolower(s[i]);
        }
    cout<<s<<endl;
    return 0;
}