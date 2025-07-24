#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    cout<<"Numbers are:"<<endl;
    for(int i=1;i<=n;i++){
        if(i==6){
            continue; // In for loop increment is not done here it will automatically increase
        }
        cout<<i<<endl;
    }
}