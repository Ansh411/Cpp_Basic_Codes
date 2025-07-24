#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :"<<endl;
    cin>>n;
    cout<<"Numbers are : "<<endl; 
    int i=1;
    while (i<=n)
    {  
        if(i==7){
        i++;
       // Increment is also done here otherwise numbers after 7 will not print (in while loop only)
        continue;
    }
       cout<<i<<endl;
       i++;
    }
    
}