// This program prints the word "name" a specified number of times using recursion.
// The function 'name' takes an integer 'n' as an argument. 
//If 'n' is 0, it returns, effectively ending the recursion. 
//Otherwise, it prints "name", decrements 'n', and calls itself again with the updated value of 'n'. 
//The main function prompts the user to enter a number, reads the input, 
//and calls the 'name' function with that number to print "name" the specified number of times.

// C++ program to print "name" n times using recursion
#include<iostream>
using namespace std;
void name(int n){
    if(n==0) return;
    cout<<"name"<<"\n";
    n--;
    name(n);
}
// Driver code
int main(){
    int n;
    cout<<"enter a number to print those many times:";
    cin>>n;
    name(n);
    return 0;
}

// Sample Input/Output
// Input: 5
// Output:
// name
// name
// name
// name
// name
