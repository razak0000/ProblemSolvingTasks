#include <iostream>
using namespace std;

void gdc_of_two_num(int a , int b){
    while(b!=0){
        int r = a%b;
        a = b;
        b = r;
    }

    cout << "the gdc of two number is " << a << endl;

}
int main(){
    int a,b;
    cout << "enter two numbers";
    cin >> a >> b;
    gdc_of_two_num(a,b);
}