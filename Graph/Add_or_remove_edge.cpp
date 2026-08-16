#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<vector<int>>& adj, int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void removeEdge(vector<vector<int>>& adj, int u, int v)
{
    adj[u].erase(find(adj[u].begin(), adj[u].end(), v));
    adj[v].erase(find(adj[v].begin(), adj[v].end(), u));
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
    int u, v;
    cin >> u >> v;
    addEdge(adj, u, v);
    cin >> u >> v;
    removeEdge(adj, u, v);
    for(int i = 1; i <= n; i++)
    {
        cout << i << " -> ";
        for(int x : adj[i])
            cout << x << " ";
        cout << endl;
    }
    return 0;
}