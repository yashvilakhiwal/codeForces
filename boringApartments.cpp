#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    
    while(t--){
        cin>>n;
        int count=0;
        int digit=n%10;
        int len=0;
        int temp=n;
        while(temp>0){
            temp/=10;
            len++;
        }
        for (int i=1;i<digit;i++){
            count+=10;
        }
        for(int i=1;i<=len;i++){
            count+=i;

        }
        cout<<count<<endl;
    }
    
    return 0;
}
