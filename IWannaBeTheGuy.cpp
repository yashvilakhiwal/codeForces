#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p;
    cin>>p;
    int a[p];
    for(int i=0;i<p;i++)
    {
        cin>>a[i];
    }
    int q;
    cin>>q;
    int b[q];
    for(int i=0;i<q;i++){
        cin>>b[i];
    }
    int count=0;
    for(int level=1;level<=n;level++){
        bool found=false;

        for(int i=0;i<p;i++){
            if(a[i]==level){
                found=true;
                break;
            }
        }
        if(!found){
        for(int i=0;i<q;i++){
            if(b[i]==level){
                found=true;
                break;
            }
        }
    }

        if(found){
            count++;
        }
    }
    if(count==n){
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
    
}