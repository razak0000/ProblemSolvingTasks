#include <iostream>
using namespace std;

void find_square_root(int n){
    int k = 0;
    for(int i=1;i<n;i++){
        int d = i*i;
        if(d==n){
            k =i;
            break;
        }
    }
     if (k > 0) {
        cout << "The square root is " << k << endl;
    } else {
      
    cout << "there is no square root for this number";
    }

}

int main(){
    int n;
    cout << "enter a number ";
    cin >> n;
    find_square_root(n);
}