#include <iostream>
using namespace std;
int main(){
    int x, cnt;
    cin >> x;
    
    if(x % 5 != 0)
        cnt = (x / 5) + 1; 
    else
        cnt = (x / 5);
    
    cout << cnt << endl;
    return 0;
}