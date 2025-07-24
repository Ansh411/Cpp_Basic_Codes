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
        cout<<i;
        j++;
     }
        cout<<endl;
        i++;
    }

}
/*  1111
    2222
    3333
    4444   */