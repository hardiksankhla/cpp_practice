// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,d;
    cin>>n;

    vector<int> v;
    int arr[n];

    for (int i = 0; i < n; i++)
    {   
        cin>>d;
        v.push_back(d);
        arr[i]=d;
    }
    
    cout<<"output of vector : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<"output of array : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"output of vector with iterator : ";
    vector<int> :: iterator it;
    for (it=v.begin(); it!=v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<"output of vector with range : ";
    for(auto element : v){
        cout<<element<<" ";
    }
    cout<<endl;

    cout<<"output of array with range : ";
    for(auto element : arr){
        cout<<element<<" ";
    }
    cout<<endl;

    vector<int> v2(4,-1);
    // -1 -1 -1 -1 

    sort(v.begin(), v.end());

    cout<<"output of sorted vector with range : ";
    for(auto element : v){
        cout<<element<<" ";
    }
    cout<<endl;

    return 0;
}