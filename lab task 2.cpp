// Max
#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    long long maxNum = 0;  
    for (int i = 0; i < N; i++) {
        long long x;
        cin >> x;
        if (i == 0 || x > maxNum) {
            maxNum = x;
        }
    }
    cout << maxNum << "\n";
    return 0;
}
