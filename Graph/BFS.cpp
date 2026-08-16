#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<vector<int>>& adj, int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void BFS(vector<vector<int>>& adj, int start)
{
    vector<bool> visited(adj.size(), false);
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for(int v : adj[u])
        {
            if(!visited[v])
            {
                visited[v] = true;
                q.push(v);
            }
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
    BFS(adj, start);
    return 0;
}