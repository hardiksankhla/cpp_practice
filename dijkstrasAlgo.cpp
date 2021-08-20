#include<bits/stdc++.h>
using namespace std;

int minDist(vector<int> distFromHead, vector<bool> shortestPath, int n){
    int min = INT_MAX;
    int indexOfMin;
    for (size_t i = 0; i < n; i++)
    {
        if (shortestPath[i]==false and distFromHead[i]<min)
        {
            min = distFromHead[i];
            indexOfMin = i;
        }
    }
    return indexOfMin;  
}

void dijkatra(vector<vector<int>> graph, int n, int head){
    vector<int> distFromHead(n, INT_MAX);
    vector<bool> shortestPath(n, false);
    distFromHead[head] =0;

    for (int i = 0; i < n-1; i++)
    {
        int indexOfMin = minDist(distFromHead, shortestPath, n);
        shortestPath[indexOfMin] = true;

        for (int j = 0; j < n; j++)
        {
            if (shortestPath[j]==false and graph[indexOfMin][j]!=0 )
            {
                   if (distFromHead[j]> distFromHead[indexOfMin]+graph[indexOfMin][j])
                   {
                        distFromHead[j]= distFromHead[indexOfMin]+graph[indexOfMin][j];
                   }   
            }  
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<i<<" "<<distFromHead[i]<<" "<<endl;
    }
    cout<<endl;
}

int main(){
    int n, e;
    cin>>n>>e;

    // Initialize graph of n no. of nodes
    vector<vector<int>> graph(n, vector<int> (n,0));
    //    OR
    // vector<vector<int>> graph(n);
    // for (int i = 0; i < n; i++)
    // {   
    //     vector<int> row(n,0);
    //     graph[i] = row;
    // }

    // Print
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // input e no. of edges
    int u, v, val;

    for (int i = 0; i < e; i++)
    {
       cin>>u>>v>>val;
       graph[u][v] = val ;
       graph[v][u] = val;  
    }
    
    // Print
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }

    dijkatra(graph, n, 0);
    
    return 0;
}