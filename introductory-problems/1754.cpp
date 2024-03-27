#include <bits/stdc++.h>
typedef long long ll;

using namespace std;



int main() {
    int t; cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        if ((a + b) % 3 != 0 or (b > 2*a) or (a > 2*b)) cout << "NO" << endl;
        else cout << "YES" << endl;
    }


    return 0;
}
