#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
// KEY IDEA : WE STORE THE NUMBERS IN A VECTOR AND WE SORT THE VECTOR
// THEN WE CAN LOOK FOR DUPLICATES BY COMPARING WITH THE PREVIOUS ELEMENT

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    vector<long> vec;
    while (n--) {
        long x; cin >> x;
        vec.push_back(x);
    }
    int ans = 1;
    sort(vec.begin(), vec.end());
    for (int i=1; i < (int) vec.size(); i++) {
       if (vec[i] != vec[i-1]) ans += 1;
    }
    cout << ans; 
    return 0;
}
