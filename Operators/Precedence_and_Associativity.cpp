#include<bits/stdc++.h>
using namespace std;
int main(){
    int a= 10 + 30 / 6;  // ("/" has higher priority than "+")
    cout<<a<<endl;
    int b= 20 * 3 / 2; // (Both "*" and "/" have same priority so associativity follows left to right)
    cout<<b<<endl;
}