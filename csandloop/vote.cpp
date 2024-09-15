#include<iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(age>=18){
        cout << "You are an adult and can vote.";
    }
    else{
        cout << "You are a minor and cannot vote.";
    }
}