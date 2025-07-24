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
        while (j<=n-i+1)
        {
          cout<<n-i+1;
          j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
/*   4444
     333     
     22
     1     */