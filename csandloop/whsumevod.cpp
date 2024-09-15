#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number"<<endl;
    cin >> n;

    int oddSum = 0; 
    int evenSum = 0; 

    int i = 1; 
    while (i <= n) {
        if (i % 2 != 0) {
            cout << i << " Odd Numbers" << endl;
            oddSum += i;
        } else {
            cout << i << " Even Numbers" << endl;
            evenSum += i;
        }
        i++; 
    }

    cout << "---------------------------------------"<< endl;
    cout << "SUM OF ALL ODD SUM=" << oddSum << endl;
    cout << "SUM OF ALL EVEN SUM=" << evenSum << endl; // corrected output

    return 0;
}