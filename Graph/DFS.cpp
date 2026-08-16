#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<vector<int>>& adj, int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void DFS(vector<vector<int>>& adj, vector<bool>& visited, int u)
{
    visited[u] = true;
    cout << u << " ";
    for(int v : adj[u])
    {
        if(!visited[v])
        {
            DFS(adj, visited, v);
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> adj(n + 1);
    for(int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        addEdge(adj, u, v);
    }
    int start;
    cin >> start;
    vector<bool> visited(n + 1, false);
    DFS(adj, visited, start);
    return 0;
}