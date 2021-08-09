#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    for (int i = a; i <= b; i++)
    {
        bool flag = false;
        for (int j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                flag = true;
                break;
            }       
        }
        if (flag==false)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}