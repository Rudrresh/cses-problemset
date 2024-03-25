#include <bits/stdc++.h>
#include <vector>
 
using namespace std;
// KEY IDEA : IT IS ALWAYS OPTIMAL TO INCREASE THE CURRENT ELEMENT UPTO THE PREVIOUS VALUE 
int main() {
    int n ; cin >> n; 
    vector<int> vec;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        vec.push_back(x);
    }
    long moves = 0;
    for (int j = 1; j < n ; ++j) {
        if (vec[j] < vec[j-1]) {
            moves += vec[j-1]  - vec[j];
            vec[j] = vec[j-1] ;
        }
    }
    cout << moves;
 
 
    return 0;
}
