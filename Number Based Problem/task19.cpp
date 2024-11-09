#include <iostream>
using namespace std;

void sum_of_odd_even(int n){
    int sumodd=0;
    int sumeven=0;
    string temp = to_string(n);
    int l = temp.length();
   for(int i=1;i<l;i++){
      int r = n%10;
      if(r%2==0){
        sumeven = sumeven + r;
      }else{
        sumodd += r;
      }
      n = n/10;
   }
   cout << "the sum of odd and ever is "<<endl;
   cout <<"odd"<< sumodd <<endl; 
   cout<< "even" <<sumeven << endl;
}

int main(){
    int n;
    cout << "enter a number to check wether it is power of two  : ";
    cin >> n;
     sum_of_odd_even(n);
}