//conditional statements
// if-else statements

// if(condition){
//     Your Code
// }


#include<iostream>
using namespace std;
int main(){
    // int n = 45;
    // if(n > 50){
    //     cout<<"n is greater than 50"<<endl;
    // }
    // else{
    //     cout<<"n is less than or equal to 50"<<endl;
    // }

    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num>=0){
        cout << "Its a Postive Number" << endl;
    }
    else{
        cout << "Its a Negative Number" << endl;
    }
}