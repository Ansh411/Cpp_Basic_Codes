#include<bits/stdc++.h>
using namespace std;
int main(){
    int r_or= 15 | 30;
    int r_and= 15 & 30;
    int r_not= ~15;
    int r_xor= 15 ^ 30;
    int r_ls= 15 << 2;
    int r_rs= 15 >> 2;
    cout<<r_or<<endl;
    cout<<r_and<<endl;
    cout<<r_not<<endl;
    cout<<r_xor<<endl;
    cout<<r_ls<<endl;
    cout<<r_rs<<endl;
}