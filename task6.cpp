#include <iostream>
using namespace std;


void factorials(int n){
    int fact = 1;
      for(int i=1; i <= n ; i++){
          fact *= i;
      }
      cout << "Factorial of " << n << " = " << fact << endl;
}

int main(){

    int n;
    cout <<  "enter a number to find its factorial : ";
    cin >> n;
    factorials(n);


}
