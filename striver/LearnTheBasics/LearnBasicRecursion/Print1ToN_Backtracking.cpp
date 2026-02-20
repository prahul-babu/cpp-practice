#include<iostream>
using namespace std;
void recr(int n){
    if(n<1) return;
    recr(n-1);
    cout<<n<<"\n";
    
}
int main(){
    int num;
    cin>>num;
    recr(num);
    return 0;
}