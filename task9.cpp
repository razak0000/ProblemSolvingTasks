#include<iostream>
using namespace std;


void square_of_eachin_n(int n){
    int sum = 0;
    int sqr;
    int temp = n;
    while (temp!=0) 
    {
        int r = temp%10;
        int sqr = r * r ;
        sum = sum + sqr;
        temp = temp/10;

    }
  cout << " SQUARE OF " << n << " DIGIT is : " << sum ;
          
    
}

int main(){
    int n;
    cout << "enter a number to find it's SUM OF N natural number : ";
    cin >> n;
    square_of_eachin_n(n);
}
