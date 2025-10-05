#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        int negatives = 0, zeros = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == -1) negatives++;
            else if (a[i] == 0) zeros++;
        }
        
        int operations = 0;
        
        // Convert all zeros to 1s
        operations += zeros;
        
        // If number of negatives is odd, we need to convert one -1 to 1
        // This requires 2 operations: -1 -> 0 -> 1
        if (negatives % 2 == 1) {
            operations += 2;
        }
        
        cout << operations << endl;
    }
    
    return 0;
}