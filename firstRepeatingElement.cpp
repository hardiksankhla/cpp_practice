#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];
    int maxNo = -1;
    
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
        maxNo = max(maxNo, array[i]);
    }
    // cout<<"max = "<<maxNo<<endl;
    
    maxNo+=1;
    int index[maxNo];

    for (int i = 0; i < maxNo; i++)
    {
        index[i]=-1;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<array[i]<<" ";
    // }
    // cout<<endl;
    // for (int i = 0; i < maxNo; i++)
    // {
    //     cout<<index[i]<<" ";
    // }
    // cout<<endl;

    int output = 10000000;

    for (int i = 0; i < n; i++)
    {   
        if (index[array[i]]==-1){
            index[array[i]] = i; 
        }
        else{
            output= min(output, index[array[i]]);
        }
    }

    if (output==10000000){
        cout<<"No repeating elements!";
    }

    else{
        cout<<"output "<<array[output]<<" "<<output<<endl;
    }

    return 0;
}