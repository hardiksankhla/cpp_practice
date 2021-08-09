#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Input two numbers : ";
    cin>>a>>b;
    char c;
    cout<<"Enter the operator : ";
    cin>>c;

    switch (c)
    {
    case '+':
        cout<<"Output is : "<<a+b;
        break;
    case '-':
        cout<<"Output is : "<<a-b;
        break;
    case '*':
        cout<<"Output is : "<<a*b;
        break;
    case '/':
        cout<<"Output is : "<<float(a)/b;
        break;
    
    default:
        cout<<"This calculator doesn't support the operator.";
        break;
    }
    return 0;
}