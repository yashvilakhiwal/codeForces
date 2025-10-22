#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a;
    int count=0;
    int pol=0;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a==-1 && pol==0){
            count++;
        }
       else if(a==-1 && pol>0){
            pol--;
        }
       else if(a>=0){
            pol+=a;
        }

    }
    cout<<count;
}