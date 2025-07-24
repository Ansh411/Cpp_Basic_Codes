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
         int spaces=1;
        while (spaces<=n-i)
        {
            cout<<" ";
            spaces=spaces+1;
        }

        int j=1;
        int val=i;
        while (j<=i)
        {
          cout<<val;
          j=j+1;
          val=val+1;
        }
          j= 2*i-2;
          while(j>=i){
            cout<<j;
            j=j-1;
          }
        cout<<endl;
        i=i+1;
    }
}
  /*   1
      232
     34543
    4567654  */