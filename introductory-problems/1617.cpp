#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
// KEY IDEA : WE NEED TO USE BINARY EXPONENTIATION
// NOTE : OTHER APPROACHES GIVE WA BECAUSE WE NEED TO MOD THE INTERMEDIATARY
ll binpow(ll base, ll exp, ll mod) {
    ll res = 1;
    while (exp > 0) {
        if (exp & 1) {
            res = (res * base) % mod;
        }
        // mod the intermediatary
        base = (base * base) % mod;
        exp >>= 1;
    }
    return res;
}
 
int main() {
    const long long MOD = 1000000007;
    ll n; cin >> n;
    ll ans = binpow(2, n, MOD); 
    cout << ans; 
 
 
    return 0;
}
