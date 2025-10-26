#include<iostream>
using namespace std;
int main(){
    int arr[5][5];
    int a,b;
    int count=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]==1){
                a=i;
                b=j;
                while (a<2){
                    int temp=arr[a][b];
                    arr[a][b]=arr[a+1][b];
                    arr[a+1][b]=temp;
                    count++;
                    a++;
                }
                while(a>2){
                    int temp=arr[a][b];
                    arr[a][b]=arr[a-1][b];
                    arr[a-1][b]=temp;
                    count++;
                    a--;
                }
                while(b<2){
                    int temp=arr[a][b];
                    arr[a][b]=arr[a][b+1];
                    arr[a][b+1]=temp;
                    count++;
                    b++;
                }
                while(b>2){
                    int temp=arr[a][b];
                    arr[a][b]=arr[a][b-1];
                    arr[a][b-1]=temp;
                    count++;
                    b--;
                }
               
            }
            
        }
    }
     cout<<count<<endl;
  
    //  for(int i=0;i<5;i++){
    //     for(int j=0;j<5;j++){
    //         cout<<arr[i][j];
    //     }
    //     cout<<endl;
    // }
return 0;

}