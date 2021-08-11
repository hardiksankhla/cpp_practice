#include<iostream>
using namespace std;
// Input :-
// 1 0 0 0 0 0
// 0 1 0 1 1 1
// 0 0 1 0 1 0
// 1 1 0 0 1 0
// 1 0 1 1 0 0
// 1 0 0 0 0 0
// 
// Output :-
// 1 0 0 0 0 0
// 0 0 0 1 1 1
// 0 0 0 0 1 0
// 1 1 0 0 1 0
// 1 0 0 0 0 0
// 1 0 0 0 0 0

const int R=6,C=6;

void rec (int i, int j,int arr[][C],int output[][C]){
    cout<<i<<" "<<j<<" "<<endl;
    if (output[i][j]==1)
    {
        return;
    }
    
    if (arr[i][j]==1 and (i==0 or i==R-1 or j==0 or j==C-1))
    {
        output[i][j]=1;
        arr[i][j]=0;
    }


    if (i>0){
        if (arr[i][j]==1 and output[i-1][j]==1)
        {
            output[i][j]=1;
            arr[i][j]=0;
        }
    }
    if (i<R-1){
        if (arr[i][j]==1 and output[i+1][j]==1)
        {
            output[i][j]=1;
            arr[i][j]=0;
        }
    }
    if (j>0){
        if (arr[i][j]==1 and output[i][j-1]==1)
        {
            output[i][j]=1;
            arr[i][j]=0;
        }
    }
    if (j<C-1){
        if (arr[i][j]==1 and output[i][j+1]==1)
        {
            output[i][j]=1;
            arr[i][j]=0;
        }
    }


    if (i>0 and arr[i-1][j]==1 and output[i][j]==1){
        rec(i-1, j, arr, output);
    }
    if (i<R-1 and arr[i+1][j]==1 and output[i][j]==1){
        rec(i+1, j, arr, output);
    }
    if (j>0 and arr[i][j-1]==1 and output[i][j]==1){
        rec(i, j-1, arr, output);
    }
    if (j<C-1 and arr[i][j+1]==1 and output[i][j]==1){
        rec(i, j+1, arr, output);
    }
    
}

int main(){

    int arr[R][C];
    int output[R][C];

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            output[i][j] = 0;
        }
        
    }

    cout<<endl;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout<<output[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<endl;

    for (int i = 0; i < R; i++)
    {
        rec(i, 0, arr, output);
        rec(i, C-1, arr, output);
    }
    for (int i = 0; i < C; i++)
    {
        rec(0, i, arr, output);
        rec(R-1, i, arr, output);
    }
    cout<<endl;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout<<output[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<endl;
    
    return 0;
}