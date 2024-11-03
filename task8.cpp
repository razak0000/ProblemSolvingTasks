#include <iostream>
using namespace std;

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

int main(){
    int n;
    cout << "enter a number to find it is prime number or not : ";
    cin >> n;
    if(isprime(n)){
        cout << n << " is a prime number";
    }
    else{
        cout << n << " is not a prime number";
    }
}