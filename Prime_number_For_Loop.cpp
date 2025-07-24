#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    cout<<"Number is :";

    bool divided= false;
    for(int d = 2; d<n; d++){
        if(n % d == 0){
          divided=true;
        }
    }
        if(divided){
            cout<<" Not Prime"<<endl;
        } else{
            cout<<" Prime Number"<<endl;        
        }
}