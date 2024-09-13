//type casting
//converting data from one type to another
// ->Conversion
// ->Casting
#include<iostream>
using namespace std;
int main(){
    //conversion-> small-big
    char grade = 'a';
    int value = grade;
    cout << "Value of grade in ASCII IS : " << value << endl;
    //typecasting
    double price = 100.99;
    int newPrice = (int)price;
    cout << "New Price is : " << newPrice << endl;
    return 0;
}