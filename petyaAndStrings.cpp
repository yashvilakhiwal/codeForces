#include<iostream>
#include <algorithm>

using namespace std;
int main(){
    string ch1,ch2;
    cin>>ch1>>ch2;
    transform(ch1.begin(), ch1.end(), ch1.begin(), ::tolower);
    transform(ch2.begin(), ch2.end(), ch2.begin(), ::tolower);
    if(ch1<ch2){
        cout<<-1<<endl;
    }
    else if(ch1>ch2){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }
    // int count=0;
    // for(int i=0;i<ch1.length();i++){
    //     if(ch1[i]<ch2[i]){
    //         cout<<-1;
    //         count=1;
    //         break;
    //     }
    //     else if(ch1[i]>ch2[i]){
    //         cout<<1;
    //         count=1;
    //         break;

    //     }
    //     else if(ch1[i]==ch2[i]){
    //             continue;
    //     }
        
    // }
    // if(count==0){
    //         cout<<0<<endl;
    //     }
    return 0;
}