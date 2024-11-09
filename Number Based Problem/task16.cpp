#include <iostream>
using namespace std;

void product_of_digit(int n) {
    int temp = n;
    int product = 1;
    while (temp!=0)
    {
      int digit = temp % 10;
      product *= digit;
      temp /= 10;

    }
    


    cout << "The product of its digit: " << product << endl;
}

int main() {
    int n;
    cout << "Enter a number to find The product of its digit: ";
    cin >> n;
    product_of_digit(n);

}
