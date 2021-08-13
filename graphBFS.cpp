#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    const int N = 1e5+2;
    bool visit[N];
    vector<int> adj[N];
    cout<<N<<endl;

    for (int i = 0; i < N; i++)
    {
        visit[i] = 0;
    }
    int n, e;
    cin>>n>>e;
    int x, y;
    for (int i = 0; i < e; i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    queue<int> q;
    
    q.push(1);
    visit[1]=1;

    while (!q.empty())
    {
        int val = q.front();

        cout<<val<<" ";

        vector<int> :: iterator i;

        for ( i = adj[val].begin() ; i != adj[val].end(); i++)
        {
            if (visit[*i]==0)
            {
                q.push(*i);
                visit[*i]=1;
            }
            
        }

        q.pop();
        
    }
    


    return 0;
}