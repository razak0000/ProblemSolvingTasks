#include <iostream>
#include <String>
using namespace std;

int ispalindrome(string str){
    string rev ;
    int n = str.length();
    for(int i = n-1; i >= 0; i--){
        rev = rev + str[i];
        }
    if (str == rev)
    {
        return true;
    }
    else{
        return false;
    }
    return true;

}

int main(){
    string str;
    cout <<  "enter a word to check palindrome or not :";
    cin >> str ;
    if (ispalindrome(str))
    {
        cout << "yes it is palindrome";
    }
    else{
       cout << "no it is not palindrome";
    }
    
}