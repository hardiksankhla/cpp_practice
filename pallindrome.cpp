#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool flag = true;

    for (int i = 0; i < n/2; i++)
    {
        if (arr[i]!=arr[n-1-i]){
            flag= false;
            break;
        }
    }
    if (flag)
    {
        cout<<"This is a palindrome";
    }
    else{
        cout<<"This is not a palindrome";
    }
    
    return 0;
}