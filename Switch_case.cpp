#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1, n2;
    char op;
    cout << "Enter numbers: ";
    cin >> n1 >> n2;
    cout << "Enter operator: ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << n1+n2;
        break;
    
    case '-':
    cout << n1-n2;
        break;
    
    case '*':
    cout << n1*n2;
    break;
    
    case '/':
    cout << n1/n2;
    break;

    case '%':
    cout << n1 % n2;
    break;
    }
}