#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :"<<endl;
    cin>>n;
    int d=2;
    bool divided=false;
    while(d<n){
        if(n%d==0){
            divided=true;
        }
        d=d+1;
    }
    if(!divided) {
        cout<<"Prime Number"<<endl;
    }else{
        cout<<"Not Prime"<<endl;
    }
}