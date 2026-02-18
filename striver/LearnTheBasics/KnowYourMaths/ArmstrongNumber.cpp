#include<iostream>
#include<cmath>
using namespace std;
int armstrong(int n){
    int cnt=0,x=n,arm=0,y,z=n;
    while(n>0){
        cnt++;
        n=n/10;
    }
    while(x>0){
        y=x%10;
        arm+=(int)pow(y,cnt);
        x=x/10;
    }
    if(arm!=z)
        return false;
    return true;
}
int main(){
    int num;
    cin>>num;
    cout<<armstrong(num);
    return 0;
}