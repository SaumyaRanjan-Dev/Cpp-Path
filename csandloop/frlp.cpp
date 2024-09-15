//for-loop
// for (initialisation;condition;updation)
// {
//     /* code */
// }

// 

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    int sum=0;
    for(int i = 1; i<=n;i++){
        sum+=i;
        if(i==5){
            break;
        }
    }
    cout << "Sum of first "<<n<<" natural numbers is: "<<sum;
    return 0;
}



//break==> to get out from loop [special keyword/reserved word]