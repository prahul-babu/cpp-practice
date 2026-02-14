//This program counts the number of digits in a given integer using a function.

// The function `count_digits` takes an integer as input and returns the count of 
//digits in that integer. 
//The main function prompts the user to enter a number, 
//calls the `count_digits` function, and displays the result.


// Function to count the number of digits in an integer
#include<iostream>
using namespace std;
int count_digits(int x){
    int count=0,temp;
    temp=x;
    while(temp>0){
        count++;
        temp=temp/10;
    }
    return count;
}

// Main function to take user input and display the number of digits
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"Number of digits in "<<num<<" is:"<<count_digits(num)<<endl;
    return 0;
}


// Sample Output:
// Enter a number:12345
// Number of digits in 12345 is:5
