#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, count=1, sum=0;
    cout<<"Enter n:"<<endl;
    cin>>n;
    while(count<=n){
        if(count%2==0){
            sum=sum+count;
        }
        count=count+1;
    }
    cout<<"Sum of even numbers from 1 to "<<n<<" is "<<sum;
}