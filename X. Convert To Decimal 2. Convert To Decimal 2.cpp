#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        unsigned int N;
        cin >> N;
        int count_ones = 0;
        unsigned int temp = N;
        while (temp > 0) {
            count_ones += (temp & 1);
            temp >>= 1;
        }
        unsigned int result = (1U << count_ones) - 1;
        cout << result << "\n";
    }
    return 0;
}