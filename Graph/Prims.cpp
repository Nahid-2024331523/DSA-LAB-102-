#include<bits/stdc++.h>
using namespace std;
void prims(vector<vector<pair<int,int>>> &adj, int n)
{
    vector<int> key(n + 1, INT_MAX);
    vector<bool> used(n + 1, false);
    key[1] = 0;
    int total = 0;
    for(int i = 1; i <= n; i++)
    {
        int u = -1;
        for(int j = 1; j <= n; j++)
        {
            if(!used[j] && (u == -1 || key[j] < key[u]))
                u = j;
        }
        used[u] = true;
        total += key[u];
        for(auto p : adj[u])
        {
            int v = p.first;
            int w = p.second;
            if(!used[v] && w < key[v])
                key[v] = w;
        }
    }
    cout << total << endl;
}
int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<pair<int,int>>> adj(n + 1);
    for(int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    prims(adj, n);
    return 0;
}