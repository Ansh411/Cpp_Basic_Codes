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
        int space=1;
        while(space<=n-i){
            cout<<" ";
            space=space+1;
        }
        int j=1;
        while (j<=i)
        {
          cout<<j;
          j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
/*        1
         12
        123
       1234
      12345    */
   