/*Write a C++ program that takes an integer N as input from the user and calculates the factorial of N using a loop.

Sample Input:- Enter a number: 4
Sample Output:- The factorial of 4 is: 24*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact = fact * i;
    }
    cout << "The factorial of"<<" "<<n<<" ""is: "<<fact<<endl;
}