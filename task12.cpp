#include <iostream>
using namespace std;


int gdc_of_two_num(int a , int b){
    while(b!=0){
        int r = a%b;
        a = b;
        b = r;
    }
   return a;
}
void lcm_of_num(int n, int m){
 int gcd = gdc_of_two_num(n,m);
 int lcm = n*m / gcd;
 cout << "LCM of " << n << " and " << m << " is " << lcm ;
}

int main(){
    int n;
    int m;
    cout << "enter TWO number to find its LCM :";
    cin >> n >> m;
    lcm_of_num(n,m);


}