#include<iostream>
using namespace std;

void reset(int array[], int n){

    for (int i = 0; i < n; i++)
    {
        array[i]=0;
    }
    n=0;
    cout<<array<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int* arr2 = arr;
    
    cout<<"Before reset."<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<n<<endl;
    cout<<arr2<<endl;
    cout<<*arr2<<endl;
    cout<<*(arr2+1)<<endl;

    reset(arr, n);
    cout<<"After reset."<<endl;
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<n<<endl;
    cout<<arr2<<endl;
    cout<<*arr2<<endl;
    cout<<*(arr2+1)<<endl;
    
    return 0;
}