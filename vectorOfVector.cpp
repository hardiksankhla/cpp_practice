#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, e;
    cin>>n>>e;
    vector<vector<int>> graph(n);

    int x,y;
    for (int i = 0; i < e; i++)
    {
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    
    for (int i = 0; i < n; i++)
    {   
        cout<<i<<" -> ";
        for(auto element:graph[i]){
            cout<<element<<" ";
        }
        cout<<endl;
    }

    
    int r,c;
    cin>>r>>c;
    vector<vector<int>> matrix(r);
    for (int i = 0; i < r; i++)
    {   
        vector<int> row(c);
        for (int j = 0; j < c; j++)
        {
            cin>>row[j];
        }
        matrix[i] = row;
    }
    
    cout<<"output : "<<endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(auto row : matrix){
        for(auto element : row){
            cout<<element<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    return 0;
}