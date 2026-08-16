#include<bits/stdc++.h>
using namespace std;
void dijkstra(vector<vector<pair<int,int>>> &adj, int start)
{
    int n = adj.size() - 1;
    vector<int> dist(n + 1, INT_MAX);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    dist[start] = 0;
    pq.push({0, start});
    while(!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        for(auto p : adj[u])
        {
            int v = p.first;
            int w = p.second;
            if(dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    for(int i = 1; i <= n; i++)
        cout << i << " -> " << dist[i] << endl;
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
    int start;
    cin >> start;
    dijkstra(adj, start);
    return 0;
}