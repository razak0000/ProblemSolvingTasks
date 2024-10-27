#include <iostream>
using namespace std;

void to_find_sumof_single_unit(int n) {
    int sum = n;
    
  
    while (sum >= 10) {
        int temp = sum;
        sum = 0; 
        
        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }
    }

    cout << "The final single-digit sum is: " << sum << endl;
}

int main() {
    int n;
    cout << "Enter a number to find its single-digit sum: ";
    cin >> n;
    to_find_sumof_single_unit(n);
    return 0;
}
