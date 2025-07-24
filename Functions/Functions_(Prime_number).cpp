#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    int d=2;
    while(d<n){
        if(n%d==0){
            return false;
        }
        d++;
    }
    return true;
}

int main(){
    bool ans=isPrime(312);
    cout<<ans<<endl;
    ans=isPrime(61);
    cout<<ans<<endl;
}
