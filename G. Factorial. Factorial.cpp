//G. Factorial
#include <iostream>
using namespace std;
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        cout << factorial(N) << "\n";
    }
    return 0;
}