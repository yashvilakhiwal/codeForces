#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int opinion;
        cin >> opinion;
        sum += opinion;
    }
    
    cout << (sum > 0 ? "HARD" : "EASY") << endl;
    
    return 0;
}