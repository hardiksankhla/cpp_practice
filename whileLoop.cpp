#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Please input a number : ";
    cin>>n;

    while (n>=0)
    {
        cout<<"The number you have inputed is : "<<n<<endl;
        cout<<"Please input a number : ";
        cin>>n;
    }
    
    return 0;
}