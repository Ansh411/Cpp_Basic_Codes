#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :"<<endl;
    cin>>n;
    int i=1;
    cout<<"Pattern :"<<endl;
    while(i<=n){
     int j=1;
     while (j<=n)
     {
        cout<<n-j+1;
        j++;
     }
        cout<<endl;
        i++;
    }

}
/*  4321
    4321
    4321
    4321   */