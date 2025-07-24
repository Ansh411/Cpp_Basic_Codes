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
        char charStart='A'+ i-1;
        while(j<=n){
            char ch=charStart+ j-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }

}
/*  ABCD
    BCDE
    CDEF
    DEFG   */ 