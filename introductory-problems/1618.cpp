#include <bits/stdc++.h>
#include <unordered_map>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

// KEY IDEA : 5 is the limiting factor to the number of 0's
// since 10's factors are 2, 5, 5 is the greater of the two

// find the closest 5 ^ exponent to n
// ie. we find the minimum x so that 5 ^ x > n
long closestN(long n) {
    long res = 1;
    while (pow(5,res) < n) res +=1;
    return res;
}

int main() {
    long n; cin >> n;
    long ans = 0;
    long exp = closestN(n);
    
    // number of zeroes is given by n / (5 ^ i)
    // for each i in 1 to closest exponent 
    for (long i = 1; i <= exp ; i++) {
        ans += (n / pow(5,i));
    }
    cout << ans;
    return 0;
}
