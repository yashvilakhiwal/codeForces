#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int j=0;j<s.length();j++){
    for(int i=2;i<s.length();i+=2){
        if(s[i]<s[i-2]){
            int temp=s[i];
            s[i]=s[i-2];
            s[i-2]=temp;
        }
    }
}
    cout<<s<<endl;
    return 0;
}