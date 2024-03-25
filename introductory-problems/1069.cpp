#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    string seq;
    cin >> seq;
    int n = seq.size();
    int maxL = 1;
    int cur = 1;
    // store the previous character and iterate through the array
    char prev = seq[0];
    for (int i = 1; i < n; ++i) {
        if (seq[i] == prev) {
            cur += 1;
            maxL = max(maxL, cur);
        }
        else {
            cur = 1;
            prev = seq[i];
        }
    }
    cout << maxL; 
    return 0;
}
