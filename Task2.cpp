//count primes
#include <iostream>
#include <vector>
int countPrimes(int n) {
    if (n <= 2) return 0;
    std::vector<bool> prime(n, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i < n; ++i) {
        if (prime[i]) {
            for (int j = i * i; j < n; j += i)
                prime[j] = false;
        }
    }
    int count = 0;
    for (int i = 2; i < n; ++i)
        if (prime[i]) count++;
    return count;
}
int main() {
    int n;
    std::cin >> n;
    std::cout << countPrimes(n) << std::endl;
    return 0;
}

//Roman to integer
            case 'M': value = 1000; break;
        }
        if (i + 1 < s.size()) {
            int nextValue = 0;
            switch (s[i + 1]) {
                case 'I': nextValue = 1; break;
                case 'V': nextValue = 5; break;
                case 'X': nextValue = 10; break;
                case 'L': nextValue = 50; break;
                case 'C': nextValue = 100; break;
                case 'D': nextValue = 500; break;
                case 'M': nextValue = 1000; break;
            }
            if (value < nextValue) {
                result -= value;
                continue;
            }
        }
        result += value;
    }
    return result;
}
int main() {
    std::string s;
    std::cin >> s;
    std::cout << romanToInt(s) << std::endl;
    return 0;
}

//FIZZ BIZZ
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        if (i % 15 == 0)
            cout << "FizzBuzz";
        else if (i % 3 == 0)
            cout << "Fizz";
        else if (i % 5 == 0)
            cout << "Buzz";
        else
            cout << i;
        if (i != n) cout << " ";
    }
    cout << endl;
    return 0;
}