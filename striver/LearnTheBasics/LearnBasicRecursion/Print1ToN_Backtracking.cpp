// Print 1 to N in backward order using recursion
// Approach: We can use a simple recursive function that takes an integer n as input. 
//The function will first call itself with n-1 until it reaches the base case 
//(when n is less than 1), and then print n on the way back up the recursive calls.
// Time Complexity: O(N)
// Space Complexity: O(N) (due to recursive stack space)

// Code:
#include<iostream>
using namespace std;
// Recursive function to print numbers from 1 to n in backward order
void recr(int n){
    if(n<1) return;
    recr(n-1);
    cout<<n<<"\n";
}
// Main function to read input and call the recursive function
int main(){
    int num;
    cin>>num;
    recr(num);
    return 0;
}
// Sample Input: 5
// Sample Output:
// 1
// 2
// 3
// 4
// 5