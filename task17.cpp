#include <iostream>
using namespace std;

void highest_common_factor(int a, int b, int c) {
    int hcf = 1;  

    int min_num = min(a, min(b, c));

    for (int i = min_num; i >= 1; i--) {
        if (a % i == 0 && b % i == 0 && c % i == 0) {
            hcf = i;
            break;  
        }
    }

    cout << "The HCF of " << a << ", " << b << ", and " << c << " is " << hcf << endl;
}

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    highest_common_factor(a, b, c);
    return 0;
}
