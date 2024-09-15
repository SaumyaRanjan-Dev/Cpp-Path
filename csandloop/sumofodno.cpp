#include<iostream>
using namespace std;

int main() {
    int n;
    int oddSum = 0;
    int EvenSum = 0;
    cout << "Enter the number" << endl;
    cin >> n;
    for(int i = 0;i<=n;i++){
        if(i%2!=0){
            cout<<i<<" Odd Numbers" <<endl;
            oddSum+=i;
        }
        else{
            cout<<i<<" Even Numbers" <<endl;
            EvenSum+=i;
        }
    }
    cout << "---------------------------------------"<< endl;
    cout << "SUM OF ALL ODD SUM=" << oddSum << endl;
    cout << "SUM OF ALL ODD SUM=" << EvenSum << endl;
    return 0;
}