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
void find_sum_of_prime(int r , int n ){
    int sum = 0;
    int i = r;
    for(i;i<n;i++){
      if(isprime(i)){
         sum = sum + i ;
      }
    }
    cout << "Sum of prime numbers is: " << sum << endl;
}


int main(){
    int r;
    int n;
    cout << "enter a startig range : ";
    cin >> r;
    cout << "enter a ending range : ";
    cin >> n;


    find_sum_of_prime(r , n);

}