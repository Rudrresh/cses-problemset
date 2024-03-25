#include <bits/stdc++.h>
#include <unordered_set>
#include <vector>
// KEY IDEA : THE SOLUTION FOR EACH NUMBER IS GOING TO BE DECREASING ORDER OF EVEN NUMBERS
// FOLLOWED BY DECREASING ORDER OF ODD NUMBER (OR) VICE-VERSA
using namespace std;
int main() {
    int n; cin >> n;
    // EDGE CASES
    if (n == 1) cout << 1<< endl;
    else if (n == 3 or n == 2) cout << "NO SOLUTION" << endl;
    else if (n == 4) cout << "2 4 1 3" << endl;
    else {
        unordered_set<int> hset;
        vector<int> vec (n, 0);
        for (int i = 1; i < n+1; ++i) {
            hset.insert(i);
        }
        if (n % 2) {
            int j = n;
            while (j >= 1) {
                cout << j << " ";
                j -= 2;
            }
            j = n -1;
            while (j >= 2) {
                cout << j << " ";
                j -= 2;
            }
        }
        else {
            int j = n;
            while (j >= 2) {
                cout << j << " ";
                j -= 2;
            }
            j = n-1;
            while (j >= 1) {
                cout << j << " ";
                j -= 2;
            }
 
        }
    }
    return 0;
}
