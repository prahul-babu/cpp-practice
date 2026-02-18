//Program to find the divisors of a given number.
//The function printdivisors is used to find out and print all the divisors of the entered number.


#include<iostream>
using namespace std;
/*
void printdivisors(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}*/
void printdivisors(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i!=(n/i)){
                cout<<(n/i)<<" ";
            }
        }  
    }
}
int main(){
    int num;
    cin>>num;
    printdivisors(num);
    return 0;
}
