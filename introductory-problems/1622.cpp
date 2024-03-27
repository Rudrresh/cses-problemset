#include <algorithm>
#include <bits/stdc++.h>
#include <set>
#include <string>
#include <vector>
#define endl '\n'
typedef long long ll;

using namespace std;
set<string> ans;
void back(int i, string s) {
    if (i == s.size()) return;
    ans.insert(s);
    for (int j = i; j < s.size(); j++) {
        char temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        back(i+1, s);
        s[i] = s[j];
        s[j] = temp;
    }
}
int main() {
    string s ; cin >> s;
    back(0,s);
    cout << ans.size() << endl;
    vector<string> vec(ans.begin(), ans.end());
    sort(vec.begin(), vec.end());
    for (string str : vec) cout << str << endl;

    return 0;
}
