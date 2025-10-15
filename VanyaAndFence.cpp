#include<iostream>
using namespace std;
int main()
{
    int n,h;
    cout<<"enter no.of friends"<<endl;
    cin>>n;
    cout<<"enter the height of the fence"<<endl;
    cin>>h;
    int width=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a<=h){
            width+=1;
        }
        else{
            width+=2;
        }
    }
    cout<<width<<endl;
    return 0;

}