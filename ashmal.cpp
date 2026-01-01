#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        string s="";
        for(int i=0;i<n;i++){
            string add_begin=a[i]+s;
            string add_end=s+a[i];
            if(add_begin<add_end){
                s=add_begin;
            }
            else{
                s=add_end;
            }
        }
        cout<<s<<endl;
    }
}