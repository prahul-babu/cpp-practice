// Print 1 to N in forward order using recursion
// Approach: We can use a simple recursive function that takes an integer n as input. 
//The function will print n and then call itself with n-1 until it reaches the base case (when n is less than 1).


// Time Complexity: O(N)
// Space Complexity: O(N) (due to recursive stack space)

// Code:

#include<iostream>
using namespace std;
// Recursive function to print numbers from n to 1
void recr(int n){
    if(n<1) return;
    cout<<n<<"\n";
    recr(n-1);
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
// 5
// 4    
// 3
// 2
// 1