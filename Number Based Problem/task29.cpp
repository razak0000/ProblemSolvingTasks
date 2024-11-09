#include <iostream>
using namespace std;


void count_of_factors(int n){
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
            }
            }
    cout << "the factors of " << n << " is " << count;        
}


int main(){
    int n;
    cout << "enter a number";
    cin >> n;

    count_of_factors(n);
}