#include <bits/stdc++.h>
#include <cmath>
#include <functional>
#include <unordered_map>
#include <vector>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

long countZeroes(long n) {
    unordered_map<int, int> factmap;
    factmap[2] = 0;
    factmap[5] = 0;
    long cur = 0;
    long factmin = 0; 
    for (long i = n; i > 1; i--) {
        cur = i;
        while (!(cur % 2)) {
            cur = cur / 2;
            factmap[2] += 1;
        }
        cur = i;
        while (!(cur % 5)) {
            cur = cur / 5;
            factmap[5] += 1;
        }
        factmin = min(factmap[2], factmap[5]);
    }
    return  factmin ;
}

int main() {
    long n; cin >> n;
    cout << countZeroes(n);

    return 0;
}
