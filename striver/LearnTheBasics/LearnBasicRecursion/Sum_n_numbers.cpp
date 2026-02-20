// Sum of first n natural numbers using recursion
// Approach: We can use a simple recursive function that takes an integer n as input. 
// The function will return n plus the result of calling itself with n-1 until it reaches the base case 
//(when n is 0, it will return 0).

// Time Complexity: O(N)
// Space Complexity: O(N) (due to recursive stack space)

// Code:
#include<iostream>
using namespace std;
// Recursive function to calculate the sum of first n natural numbers
int sum(int n){
    int s=0;
    s=sum(n-1)+n;
    if(n==0) return s;
}
// Main function to read input and call the recursive function
int main(){
    int num;
    cin>>num;
    cout<<sum(num);
    return 0;
}
// Sample Input: 5
// Sample Output: 15 (1+2+3+4+5 = 15