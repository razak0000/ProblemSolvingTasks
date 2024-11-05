#include <iostream>
#include <String>
using namespace std;

long factorial_of(int n){
    long fact = 1;
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    return fact;
}

void trailing_of_zero(int n){
    long z = factorial_of(n);
    string a = to_string(z);
    int l = a.length();
    int count = 0;
    for(int i=0;i<l;i++){
        if(a[i] == '0'){
            count += 1;
        }
    }
    cout << "the number of zeros are : " << count ;
}

int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    trailing_of_zero(n);
}