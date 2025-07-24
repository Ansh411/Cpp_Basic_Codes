#include<bits/stdc++.h>
using namespace std;

int increment(int n){
    n=n+1;
    return n;
}

int main(){
    int a=10;
    increment(a); // When the function is called with actual parameters
                  // the formal parameters' value store in new memory and any update in 
                 // formal parameters do not show in actual parameters
              
    int inc=increment(a); // Assigning the function into a new variable will update the changes

    cout<<a<<endl;
    cout<<inc<<endl;
}