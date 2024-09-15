// //check if anumber is prime or not
// n=>1,n
// p-2,3,5,7,11
// np-4,6,10,9
// Check if a number is prime or not
#include<iostream>
#include<cmath> // for sqrt function
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is less than 2
    if (num < 2) {
        cout << "Number is not prime" << endl;
        return 0;
    }

    bool isPrime = true;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << "Number is prime" << endl;
    } else {
        cout << "Number is not prime" << endl;
    }

    return 0;
}