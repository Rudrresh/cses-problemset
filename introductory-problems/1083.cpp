#include <bits/stdc++.h>
 
using namespace std;
// KEY IDEA : STORE THE NUMBERS 1 THROUGH N IN A HASHSET/ UNORDERED SET  
int main() {
    unordered_set<int> set;
    int n; cin >> n ;
    for (int i = 1; i < n; ++i) {
        int x;
        cin >> x;
        set.insert(x);
    }
    for (int j = 1; j < n+1; ++j) {
        if (! set.count(j)) {
            cout << j;
            break;
        }
    }
 
    return 0;
}
