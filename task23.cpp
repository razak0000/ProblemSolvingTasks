#include <iostream>
using namespace std;

int largestPrimeFactor(int n) {
    int largestFactor = -1;

   
    while (n % 2 == 0) {
        largestFactor = 2;
        n /= 2;
    }

  
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largestFactor = i;
            n /= i;
        }
    }

   
    if (n > 2) {
        largestFactor = n;
    }

    return largestFactor;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = largestPrimeFactor(n);
    cout << "The largest prime factor of " << n << " is: " << result << endl;

    return 0;
}
