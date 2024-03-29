#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
// KEY IDEA : USE KADANE'S ALGORITHM -> O(N) TIME COMPLEXITY
// WE READ THE LONG INT AND WE PUSH TO THE VECTOR,
// THE MAX OF THE NUMBER AND THE SUM OF THE NUMBER AND THE ELEMENT IN THE BACK OF THE VECTOR
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<long> vec;
    long maxn = 0;
    while (n--) {
        long x; cin >> x;
        if (vec.size() > 0) {
            vec.push_back(max(vec.back()+x,x));
        }
        else {
            vec.push_back(x);
            maxn = x;
        }
        maxn = max(maxn, vec.back());
    }
    cout << maxn;
    

    return 0;
}
