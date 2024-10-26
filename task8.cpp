#include <iostream>
using namespace std;

int isprime(int n){
    if(n==0 || n==1){
        return false;
    }
    for(int i=2;i<=5;i++){
        if(n%i==0){
            return false;
        }
        else{
            return true;
        }
    }
    return true;
}

int main(){
    int n;
    cout << "enter a number to find it is prime number or not : ";
    cin >> n;
    if(isprime(n)){
        cout << n << " is a prime number";
    }
    else{
        cout << n << " is not a prime number";
    }
}