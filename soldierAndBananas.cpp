#include<iostream>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int x=0;
    for(int i=1;i<=w;i++){
        x+=i*k;
    }
    cout<<max(0,x-n)<<endl;
    return 0;
}