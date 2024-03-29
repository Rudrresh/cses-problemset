#include <iostream>
#include <unordered_map>
typedef long long ll;

using namespace std;
// KEY IDEA : WE USE A HASHMAP / UNORDERED MAP TO STORE THE 
// VALUE TO BE ADDED WITH THE ELEMENT IN-ORDER TO REACH THE TARGET

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long n,x;
    cin >> n >> x;
    long k = n;
    unordered_map<long, long> hmap;
    bool flag = false;
    while (n--) {
        long a; cin >> a;
        // important that we continue the loop if the read element is greater than the target
        // otherwise the solution TLEs
        if (a > x) continue;
        if (hmap.count(a) and hmap[a] != k-n) {
            flag = true;
            cout << hmap[a] << " " << k-n << endl;
            break;
        }
        hmap[x-a] = k-n;

    }
    if (not flag) cout << "IMPOSSIBLE";
    


    return 0;
}
