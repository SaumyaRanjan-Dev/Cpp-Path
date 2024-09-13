#include<iostream>
using namespace std;
int main(){
    //data type-> int,char,float,bool,double
    //computer follow binary number system -> 0 ,1
    // 1 <- bit 8 <- byte
    // ex- int byte-> 4 mean 8*4=32 bit  space resverd int age = 25 so 11001
    //int -> 4 byte
    //char -> 1 byte all value stored in ASCII Value
    //float-> 4 byte
    //bool-> 1 byte either true{1} or false{2}
    //double-> 8 byte

    int age=25;
    char grade = 'A';
    float marks = 85.5f;//MUST WRITE F AT END TO GIVE IT AS FLOAT VALUE AS REF
    bool isSafe = true;
    double price = 100.99;
    cout<<"age is "<<age<<endl;
    cout <<"grade is "<<grade<<endl;
    cout << "marks is "<<marks<<endl;
    cout << "is it is safe "<<isSafe<<endl;
    cout << "Price of coke is "<<price<<endl;
    return 0;
}