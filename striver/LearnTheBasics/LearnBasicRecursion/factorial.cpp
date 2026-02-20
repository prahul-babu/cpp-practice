// Factorial of a number using recursion
// Approach: We can use a simple recursive function that takes an integer n as input. 
// The function will return n multiplied by the result of calling itself with n-1 until it 
// reaches the base case (when n is 0, it will return 1).
// Time Complexity: O(N)
// Space Complexity: O(N) (due to recursive stack space)

// Code:
#include<iostream>
using namespace std;
// Recursive function to calculate the factorial of a number
int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}
// Main function to read input and call the recursive function
int main(){
    int num;
    cin>>num;
    cout<<fact(num);
    return 0;
}
// Sample Input: 5
// Sample Output: 120 (5! = 5*4*3*2*1 = 120)