//This program reverses a given integer using a function.
// The function `rever` takes an integer as input and returns the reversed integer.
// The main function prompts the user to enter a number, calls the `rever` function, and displays the result.

// Function to reverse an integer
#include<iostream>
using namespace std;
int rever(int n){
    int temp,sum=0;
    temp=n;
    while(n>0){
        temp=n%10;
        sum=(sum*10)+temp;
        n=n/10;
    }
    return sum;
}

// Main function to take user input and display the reversed number
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"The given number "<<num<<" after reversing is:"<<rever(num)<<endl;
    return 0;
}

// Sample Output:
// Enter a number:12345
// The given number 12345 after reversing is:54321