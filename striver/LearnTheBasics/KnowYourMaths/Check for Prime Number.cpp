
#include<iostream>
using namespace std;
/*
int isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
        else return true;
    }
}
*/
int isprime(int n){
    int cnt=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0) {
            cnt++;
            if(i!=(n/i))
            cnt++;
        }
    }
    if(cnt>2) return false;
    else return true;
}

int main(){
    int num;
    cin>>num;
    if(isprime(num)==true) cout<<"isprime"<<endl;
    else cout<<"not prime"<<endl;
    return 0;
}