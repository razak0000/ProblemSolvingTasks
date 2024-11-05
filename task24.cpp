#include <iostream>
using namespace std;

void find_the_num_type(int n){
    int sum = 0;
    for(int i=1;i<n;i++){
       if(n%i == 0){
          sum += i;
       }

    }

    if(sum > n){
        cout << "Abundant";
    }else  if(sum == n){
        cout << "perfect";
    }else if(sum < n){
        cout << "deficient";
    }
}

int main(){
    int n;
    cout << "enter a number  : ";
    cin >> n;
    find_the_num_type(n);
}