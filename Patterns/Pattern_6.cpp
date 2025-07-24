#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :"<<endl;
    cin>>n;
    int i=1;
    cout<<"Pattern :"<<endl;
    while (i<=n)
    {
        int j=1;
        int val=i;
        while (j<=i)
        {
          cout<<val;
          j=j+1;
          val=val+1;
        }
        cout<<endl;
        i=i+1;
    }
}
/*  1
    23
    345
    4567  */