#include <bits/stdc++.h>
#include <vector>

using namespace std;
// KEY IDEA : INITIALIZE 2 VECTORS , ONE WITH ALL THE NUMBERS, THE OTHER EMPTY
// GREEDILY ADD THE NUMBERS FROM THE FIRST VECTOR TO THE SECOND ONE
// KEEPING TRACK OF THE SUM IN EACH 
int main() {
    long long n;
    cin >> n;
    vector<long long> vec(n);
    vector<long long> vec2;
    for (int i = 1; i <= n; i++) {
        vec[i-1] = i;
    }
    long long sum = (1 + n) * n / 2; 
    long long a = sum;
    long long half = sum / 2;
    long long b = 0;
    if (sum % 2) {
        cout << "NO";
    }
    else if (n == 1) cout << "NO";
    else {
        while (b < half) {
            for (long long j = n-1; j >= 0; j--) {
                // we dont add the number to the other vector if,
                // it goes over the halfway point (total sum /2)
                if (b + vec[j] > half) continue;
                auto it = vec.begin() + j;
                long long temp = *it;
                vec.erase(it);
                b += temp;
                a -= temp;
                vec2.push_back(temp);


            }
        }
        if (a != b) cout << "NO"; 
        else {
            cout << "YES" << endl;
            cout << vec.size() << endl;
            for (long long num1 : vec) cout << num1 << " ";
            cout << endl;
            cout << vec2.size() << endl;
            for (long long num2: vec2) cout << num2 << " ";
        }
    }

    return 0;
}
