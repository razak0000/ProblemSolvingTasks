#include <iostream>
using namespace std;


void power_of_num(int n, int m){
    int pow = 1;
    for(int i =0; i<m;i++){
       pow *= n;

    }
    cout << "the result for " <<n << "^" << m << " is : "<<pow << endl;
}

int main(){
    int n;
    int m;
    cout << "enter a number : ";
    cin >> n;
    cout << "give me its exponent : ";
    cin >> m;

    power_of_num(n,m);

}