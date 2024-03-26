#include <bits/stdc++.h>
#include <tuple>
#include <unordered_map>
typedef long long ll;

using namespace std;



int main() {
    int t; cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        if (a == 0 and b == 0) cout << "YES" << endl;
        else if (a == 0 or b == 0) cout << "NO" << endl;
        else if ((a == 1 and b == 1) or (a == 2 and b == 2)) cout << "NO" << endl;
        else if (!(2 * a - b) % 3) cout << "YES" << endl;
        else if (!(2 * b - a) % 3) cout << "YES" << endl;
        else cout << "NO" << endl;
    }


    return 0;
}
