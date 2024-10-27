#include <iostream>
using namespace std;

void find_divisors(int n){
   for(int i= 1; i<=n ; i++){
        if(n%i==0){
            cout<<i << " ";
            if(n == i)
            {
                cout<<" ";
            }
            else{
                cout<<", ";
            }
            
            
        }
   }
}

int main(){
    int n;
    cout << "enter a number";
    cin >> n;
    find_divisors(n);

}