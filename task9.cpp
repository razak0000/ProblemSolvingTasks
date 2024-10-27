#include <iostream>

using namespace std;


void findfibonnacci(int n){
     int num1 = 0;
     int num2 = 1;
     int sum;
     for(int i=0;i<n;i++){
        sum = num1 + num2;
        num2 = num1;
        num1 = sum;
     }
     cout<<sum;
}

int main(){
    int n;
    cout << "enter a number to find its fibonacci number ";
    cin >> n;
    findfibonnacci(n);
}
