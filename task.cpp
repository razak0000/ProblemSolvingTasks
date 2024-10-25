#include <iostream>
using namespace std;



void sum_of_num(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum += i;
    }

    cout << "the sum of the number " << n << " is " << sum ;
}


void sum_of_its_digit(int n){
    int temp = n;
    int sum = 0;
    int r;
    while(temp!=0){
        r = temp%10;
        sum += r;
        temp = temp/10;
    }
   cout << "the sum of its is  number " << n << " is " << sum ;

}

int main(){
    int n;
    cout << "enter a number ";
    cin >> n;
    sum_of_its_digit(n);
}
