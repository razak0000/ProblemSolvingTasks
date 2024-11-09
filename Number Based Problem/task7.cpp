#include<iostream>
using namespace std;


int isperfect(int n){
    int sum = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            sum += i;
            }
            }
            if(sum == n){
                return true;
                 }
                else{
                    return false;
                }
                
     return true;
}

int main(){
    int n;
    cout << "enter a number to check it is perfect number or not: ";
    cin >> n;
    if(isperfect(n)){
        cout << n << " is a perfect number";
    }
    else{
        cout << n << " is not a perfect number";
    }
}
