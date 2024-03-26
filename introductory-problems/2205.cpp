#include <bits/stdc++.h>
typedef long long ll;
// KEY IDEA : GRAY CODE OF CURRENT n : PREVIOUS n-1 GRAY CODE 
// EXTENDED WITH REVERSE OF PREVIOUS GRAY CODE , 
// CONCAT "0" TO THE BEGINNING OF EVERYSTRING IN THE FIRST HALF, "1" FOR THE SECOND HALF

using namespace std;
int main() {
    int n; cin >> n;
    vector<string> vec = {"0","1"};
    for (int i = 1; i < n; i++) {
        vector<string> vec2 = vec;
        reverse(vec2.begin(), vec2.end()); 
        vec.insert(vec.end(), vec2.begin(), vec2.end());
        int half = vec.size() / 2;
        for (int k = 0; k < vec.size(); k++) {
            if (k < half) vec[k] = "0" + vec[k];
            else vec[k] = "1" + vec[k];
        }
    }
    for (string str: vec) cout << str << endl; 
    return 0;
}
