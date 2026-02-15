// This program checks if a given integer is a palindrome.
// A palindrome is a number that reads the same backward as forward.
// The function `isPalindrome` takes an integer as input and returns `1`(true) if the number is a palindrome, and `0`(false) otherwise.
// The main function prompts the user to enter a number, calls the `isPalindrome` function, and displays the result.

#include<iostream>
using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int x){
    if(x<0) return false;
    long long temp=0,z=x;
    while(x>0){
        temp=(temp*10)+(x%10);
        x/=10;
    }
    return temp==z;
}

// Main function to take user input and check if it's a palindrome
int main(){
    int x;
    cin>>x;
    cout<<isPalindrome(x)<<endl;
    return 0;
}

// Sample Output:
// 121
// 1

// -121
// 0

// 10
// 0
