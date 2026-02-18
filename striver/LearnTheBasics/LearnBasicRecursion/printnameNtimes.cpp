#include<iostream>
using namespace std;
void name(int n){
    if(n==0) return;
    cout<<"name"<<"\n";
    n--;
    name(n);
}
int main(){
    int n;
    cout<<"enter a number to print those many times:";
    cin>>n;
    name(n);
    return 0;
}