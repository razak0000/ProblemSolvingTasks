#include <iostream>
#include <String>
using namespace std;

void find_len_of_num(int n){
    int a = n;
    string temp = a.toString;
    int len = temp.length();
    cout << len << endl;

}

int main(){
    int n;
    cout << "enter some digit of numbers" ;
    cin >> n;
    find_len_of_num(n);


}