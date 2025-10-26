#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        string ch;
        cin>>ch;
        if((ch[1]=='+')|| (ch[0] =='+')){
            count++;
        }
        else{
            count--;
        }
    }
    cout<<count<<endl;
    return 0;
}