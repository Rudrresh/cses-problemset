#include <bits/stdc++.h>
#include <vector>
typedef long long ll;

using namespace std;

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
