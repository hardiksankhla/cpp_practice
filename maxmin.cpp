#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int array[n];
    int max, min;

    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
        if (i==0){
            max = array[0];
            min = array[0];
        }
        else{
            if (max<array[i])
            {
                max = array[i];
            }
            if (min>array[i])
            {
                min = array[i];
            }
        }
    }
    cout<<"Array = ";
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<"Max = "<<max<<endl;
    cout<<"Min = "<<min<<endl;

    
    
    return 0;
}