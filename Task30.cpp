#include <iostream>
using namespace std;

int single_digit(int n){
   int prod = 1;
    for(int i =1; i<=n ;i++){
        prod *= i;
        // cout<<prod<<endl;
    }
    return prod;
}

void strong_num(int n){
    int z = n;
    int single = 0;
    string a = to_string(n);
    int l = a.length();
    int r;
    for(int i =1; i<=l ;i++){
        r = n % 10;
        single += single_digit(r);
        // cout << single<<endl;
        n = n / 10;
    }
    if(single == z){
        cout << "true" ;
    }else{
        cout << "false";
    }

}

int main(){
    int n;
    cout << "enter a number ";
    cin >> n;
    strong_num(n);
}