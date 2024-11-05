#include <iostream>
using namespace std;

int lenofnum(int n){
   int sum = 0;
  while(n > 0)
  {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

void find_its_root(int n){
    int z = n;
   while(z >=10){
      z = lenofnum(z);
  }
  cout << z ;
}


int main(){
    int n;
    cout << "enter a number";
    cin >> n;
    find_its_root(n);
    return 0;
}