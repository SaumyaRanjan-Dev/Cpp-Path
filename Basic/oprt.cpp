//op
// arthemetic----> + - * /
// relational----> 
// logical
// assignment----> = += -= *= /= %= **= /= <<= >>= >>>= &= ^= |=
// unary - ++,--
#include<iostream>
using namespace std;
int main(){

    //arithmetic
    int a=5,b=10,sum;
    sum = a+b;
    cout<<"sum of a and b is "<<sum<<endl;
    cout<<"Difference =" << (b-a)<<endl;
    cout<<"Product = " << (a*b)<<endl;
    cout<<"Divisor = " << (a/b)<<endl;
    cout<<"Modulo = " << (a%b)<<endl; 

    int ans = (5/(double)2);
    cout << ans << endl;
    cout <<(5/(double)2)<<endl; 


    // relational
    // < <= > >= == !=
    //true->1 false-0
    //return boolean value
    cout << (3<5) << endl;
    cout << (3>5) << endl;
    cout << (3<=5) << endl;
    cout << (3>=5) << endl;
    cout << (3==3) << endl;
    cout << (3==5) << endl;
    cout << (3!=3) << endl;


    // Logical 
    //OR AND NOT

    //uniary oprt
    //incr and decr
    int x = 5;
    int y = x++;
    int c = 10;
    int d= --c;
    cout << d << endl;
    cout << y << endl; //5
    cout << x << endl; //6


    return 0;




}

// int/int=int
// int/float=float
// int/double=double