#include<bits/stdc++.h>
using namespace std ;
int main() {
    int a,b;
    cin>>a>>b;
    cout<<"Enter values of a and b: "<<a<<" and "<<b<<endl;
    bool isEqual=(a==b);
    bool isLess_than=(a<b);
    bool isGreater_than=(a>b);
    bool less_than_Equalto=(a<=b);
    bool greater_than_Equalto=(a>=b);
    bool notequal=(a!=b);
    cout<<"Are a and b equal ? "<<isEqual<<endl;
    cout<<"Is a less than b ? "<<isLess_than<<endl;
    cout<<"Is a greater than b ? "<<isGreater_than<<endl;
    cout<<"Is a less than or equal to b ? "<<less_than_Equalto<<endl;
    cout<<"Is a greater than or equal to b ? "<<greater_than_Equalto<<endl;
    cout<<"Are they unequal ? "<<notequal<<endl;
    bool first=(isEqual&&isGreater_than);
    bool second=(isEqual||isGreater_than);
    cout<<"AND Operator "<<first<<endl;
    cout<<"OR Operator "<<second<<endl;
    cout<<"Not Equal: "<<!isEqual<<endl;
}