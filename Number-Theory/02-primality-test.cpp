// Given a number is it prime
#include <bits/stdc++.h>
using namespace std;


bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
    // O(n)
}


bool is_prime2(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    int root = sqrt(n+1);
    if (n % 2 == 0) return false;
    for (int i = 3; i <= root; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
    // O(sqrt(n)/2) -> O(sqrt(n))
}



#define testing(n) cout << n << ": " << is_prime2(n) << "\n";

int main() {
    cout << boolalpha;
    testing(15);
    testing(1);
    testing(-2);
    testing(2);
    testing(7);
    testing(20);
}
