#include<iostream>
using namespace std;


void sum_of_n(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
  cout << " SUM OF " << n << " natural number is : " << sum ;
          
    
}

int main(){
    int n;
    cout << "enter a number to find it's SUM OF N natural number : ";
    cin >> n;
    sum_of_n(n);
}
