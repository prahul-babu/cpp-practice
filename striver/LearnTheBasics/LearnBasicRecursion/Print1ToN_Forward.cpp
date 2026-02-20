#include<iostream>
using namespace std;
void recr(int n){
    if(n<1) return;
    cout<<n<<"\n";
    recr(n-1);
}
int main(){
    int num;
    cin>>num;
    recr(num);
    return 0;
}