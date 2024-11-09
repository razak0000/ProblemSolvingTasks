#include <iostream>
using namespace std;

bool isprime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void find_nth_prime(int n) {
    int arr[n];
    int k = 0; 
    int i = 2;  

  
    while (k < n) {
        if (isprime(i)) {
            arr[k] = i;
            k++;
        }
        i++;
    }

  
    cout << "The " << n << "th prime is: " << arr[n - 1] << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    find_nth_prime(n);

    return 0;
}
