#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; // Only odd numbers
    cout<<"Enter n:"<<endl;
    cin>>n;
    int i=1;
    int n1=(n+1)/2;
    cout<<"Pattern :"<<endl;
    while (i<=n1){
        int spaces=1;
        while (spaces<=n1-i)
        {
            cout<<" ";
            spaces=spaces+1;
        }
        int j=1;
            while(j<=2*i-1){
                cout<<"*";
                j=j+1;
            }
        cout<<endl;
        i=i+1;
    }
    int n2=n/2; 
    i=1;
    while(i<=n2){
        int spaces=1;
        while(spaces<=i){
            cout<<" ";
            spaces=spaces+1;
        }
        int j=2*(n2-i+1)-1;
        while(j>=1){
            cout<<"*";
            j=j-1;
        }
        cout<<endl;
        i=i+1;
    }
}
/*         *
          ***
         *****
        *******
       *********
        *******
         *****
          ***
           *
                       */