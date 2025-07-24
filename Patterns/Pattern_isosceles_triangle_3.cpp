#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    int i=1;
    cout<<"Pattern :"<<endl;
    while(i<=n){
        int spaces=1;
        while(spaces<=i-1){
            cout<<" ";
            spaces=spaces+1;
        }
        int j=2*(n-i+1)-1;
        while(j>=1){
            cout<<"*";
            j=j-1;
        }
        cout<<endl;
        i=i+1;
    }
}
/* 
    *********
     *******
      *****
       ***
        *       */