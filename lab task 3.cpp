
//even, odd, positive, and negative,
#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int evenCount = 0, oddCount = 0, positiveCount = 0, negativeCount = 0;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        if (x % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
        if (x > 0) {
            positiveCount++;
        } else if (x < 0) {
            negativeCount++;
        }
    }
    cout << "Even: " << evenCount << "\n";
    cout << "Odd: " << oddCount << "\n";
    cout << "Positive: " << positiveCount << "\n";
    cout << "Negative: " << negativeCount << "\n";