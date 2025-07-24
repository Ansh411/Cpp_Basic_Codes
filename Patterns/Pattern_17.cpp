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
          cout<<i;
          j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
/*   1111
     222     
     33
     4     */