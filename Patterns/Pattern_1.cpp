#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :"<<endl;
    cin>>n;
    // While Loop
   /* int i=1;
    cout<<"Pattern :"<<endl;
    while(i<=n){
        int j=1;
        while (j<=i)
        {
          cout<<j<<" ";
          j=j+1;
        }
        cout<<endl;
        i=i+1;
    }*/

    // For Loop

    for(int i = 1 ; i <= n; i++){
        for(int j = 1 ; j <= i ; j++){
            cout << j << ' ';
        }
        cout << endl;
    }
}
/* 1
   1 2
   1 2 3
   1 2 3 4*/
