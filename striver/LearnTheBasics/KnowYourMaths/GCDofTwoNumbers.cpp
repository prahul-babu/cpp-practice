// GCD of Two Numbers
// Given two numbers, find their GCD (Greatest Common Divisor). 
//The GCD of two numbers is the largest positive integer that divides both numbers without leaving a remainder. 
//The function `gcd` takes two integers as input and returns their GCD.

// Function to calculate GCD of two numbers
#include<iostream>
using namespace std;
int gcd(int n1,int n2){
    while(n1>0&&n2>0){
        if(n1>n2)  n1=n1%n2;
        else n2=n2%n1;
    }
    if(n1==0) return n2;
    else return n1;
}

// Main function to take user input and display the GCD of the two numbers
int main(){
    int n1,n2;
    cin>>n1;
    cin>>n2;
    cout<<"gcd is:"<<gcd(n1,n2);
    return 0;
}

// Sample Output:
// 48
// 18
// gcd is:6