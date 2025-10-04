#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    long long x[4];
    for(int i=0;i<4;i++)
    {
        cin>>x[i];
    }
    sort(x,x+4);
    long long a=x[3] -x[2];
    long long b=x[3]-x[1];
    long long c=x[3]-x[0];
    cout<<a<<" "<<b<<" "<<c<<" "<<endl;
    return 0;
}