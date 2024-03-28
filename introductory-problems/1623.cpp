#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
ll mindiff = pow(10,9) + 7;
// KEY IDEA: N < 20 : SO WE CAN USE BRUTE FORCE / RECURSION
// TO GENERATE THE SUMS OF DIFFERENT SUBSETS OF APPLES
// DIFFERENCE = 2 * CURRENT SUM - TOTAL SUM OF ALL APPLES

void back(int i, vector<ll> vec,ll cur, ll total) {
    if (i == vec.size()) return;
    mindiff = min(mindiff,abs(2*cur - total));
    for (int j = i + 1; j < vec.size(); j++) {
        back(j,vec,cur+vec[j],total);
    }
    return;
}
int main() {
    int n; cin >> n;
    vector<ll> vec;
    ll sum = 0;
    while (n--) {
        int x; cin >> x;
        sum += x;
        vec.push_back(x);
    }
    back(-1,  vec, 0, sum);
    cout << mindiff << endl;


    return 0;
}
