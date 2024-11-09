#include <iostream>
using namespace std;

void ispower_of_two(int n){
    int k=1;
   for(int i=2;i<=n;i++){
      k *= 2;
       if(n==k){
        cout << "true" << endl;
        break;
       }
   }
   if(n!=k){
         cout << "false" ;
   }
}

int main(){
    int n;
    cout << "enter a number to check wether it is power of two  : ";
    cin >> n;
     ispower_of_two(n);
}