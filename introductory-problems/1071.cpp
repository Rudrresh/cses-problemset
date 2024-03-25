#include <bits/stdc++.h>
 
using namespace std;
// KEY IDEA: THE SQUARE NUMBERS IN A NUMBER SPIRAL ALWAYS OCCUR AT THE TOP ROW AND LEFTMOST COLUMN
// THE SQUARE NUMBERS ALTERNATE BETWEEN THE TOP ROW AND THE LEFTMOST COLUMN
// WE NEED TO FIND THE CLOSEST SQUARE NUMBER TO EACH x y in the testcases
 
int main() {
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        long x;
        long y;
        // We need to determine which is the closest square number so we consider the max out of x and y
        cin >> x >> y;
        if (x > y) {
            if (x % 2) {
                cout << (x-1) * (x-1) + y << endl;
            }
            else cout << (x * x) + 1 - y << endl;
        }
        else {
            if (y % 2) {
                cout << (y * y) + 1 - x << endl;
            }
            else cout << (y-1) * (y-1) + x << endl;
        }
    }
 
 
 
    return 0;
}
