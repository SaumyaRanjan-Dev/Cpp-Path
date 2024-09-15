//CHECK A CHAR IS LOWER CASE OR UPPERCASE BY ASCII
//ASCII CHAR-> NUMBER a=97 A-65
//ASCII-65-122
//Range A-Z = 65-90 [UPPERCASE]
//Range a-z = 97-122 [LOWERCASE]
#include<iostream>
using namespace std;

int main() {
    char c;
    cout << "Enter a charcter";
    cin >> c;
    if(c>=65 && c<=90){
        cout << "Uppercase";
    }
    else{
        cout << "lowercase";
    }
    return 0;
}