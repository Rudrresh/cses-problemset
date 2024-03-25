#include <bits/stdc++.h>
// KEY IDEA : A PAIR OF KNIGHTS THAT ATTACK EACH OTHER WILL ALWAYS BE IN A 2X3 OR 3X2 BLOCK
// NO OF POSITIONS THAT THE KNIGHT CAN BE IN = 
// TOTAL NO. OF COMBINATIONS - NO. OF POSITIONS WHERE THE KNIGHTS ATTACK EACH OTHER
unsigned long nCr( unsigned n, unsigned k) {
    if (k > n) return 0;
    if (k * 2 > n) k = n - k;
    if (k == 0) return 1;
 
    unsigned long result = n;
    for (unsigned long i = 2; i <=k; ++i) {
        result *= (n-i+1);
        result /= i;
    }
    return result;
}
 
 
using namespace std;
int main() {
  unsigned long n; cin >> n;
  for (unsigned long x = 1; x <= n; x++)  {
     // for each 2x3 and 3x2 block 
     // there is 2 sets of possible positions where they attack each other
     cout << nCr(x*x,2) - (x-1) * (x-2) * 4 << endl;
  }
  return 0;
}
