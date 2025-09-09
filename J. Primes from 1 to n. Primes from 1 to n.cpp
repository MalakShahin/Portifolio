#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    int limit = (int) sqrt(num);
    for (int i = 3; i <= limit; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}
int main() {
    int N;
    cin >> N;
    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            cout << i << "\n";
        }
    }
    return 0;
}