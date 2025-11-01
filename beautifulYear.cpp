#include <iostream>
using namespace std;

int main() {
    int y;
    cin >> y;
    
    y++;
    while (true) {
        int temp = y;
        int digits[10] = {0};
        bool distinct = true;
        
        while (temp > 0) {
            int digit = temp % 10;
            if (digits[digit] > 0) {
                distinct = false;
                break;
            }
            digits[digit]++;
            temp /= 10;
        }
        
        if (distinct) {
            cout << y << endl;
            break;
        }
        
        y++;
    }
    
    return 0;
}