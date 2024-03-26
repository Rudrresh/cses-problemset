#include <bits/stdc++.h>
typedef long long ll;

// KEY IDEA : CAN ONLY CONSTRUCT A PALINDROME IF THERE IS EXACTLY ONE CHARACTER WITH ODD FREQUENCY
// OR THERE IS NO CHARACTERS WITH ODD FREQUENCY
using namespace std;

int main() {
    int oddNs = 0;
    char oddChar;  
    string word;
    cin >> word;
    unordered_map<char, int> freq;
    for (char ch : word) {
        freq[ch] += 1;
    }

    for (const auto& pair : freq) {
        if (pair.second % 2) { 
            oddNs += 1; 
            oddChar = pair.first;
        }
        if (oddNs > 1) break;
    }
    if (oddNs > 1) cout << "NO SOLUTION"; 
    
    else {
        string res = "";
        if (oddNs == 1)  res += oddChar;
        freq[oddChar] -= 1;
        for (int i = 65; i <= 65 + 26; i++) {
            char curChar = static_cast<char>(i);
            if (!freq.count(curChar)) continue;
            string appString = ""; 
            for (int j = freq[curChar]; j > freq[curChar] / 2; j--) appString += curChar;
            res = appString + res + appString;
        }
        cout << res << endl;
    }

    return 0;
}
