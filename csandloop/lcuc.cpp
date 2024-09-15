//find a character is a lower-case or a uppercase
#include<iostream>
using namespace std;
int main() {
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if (ch >='a' && ch <= 'z'){
        cout<<"The character is a lower-case letter."<<endl;
    }
    else{
        cout<<"The character is a upper-case letter."<<endl;
    }
    return 0;
}