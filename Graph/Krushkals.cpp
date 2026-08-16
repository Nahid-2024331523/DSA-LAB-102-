#include<bits/stdc++.h>
using namespace std;
struct Edge
{
    int u, v, w;
};
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}
int findParent(int x, vector<int>& parent)
{
    if(parent[x] == x)
        return x;
    return parent[x] = findParent(parent[x], parent);
}
void kruskal(vector<Edge>& edges, int n)
{
    sort(edges.begin(), edges.end(), cmp);
    vector<int> parent(n + 1);
    for(int i = 1; i <= n; i++)
        parent[i] = i;
    int total = 0;
    for(auto edge : edges)
    {
        int a = findParent(edge.u, parent);
        int b = findParent(edge.v, parent);
        if(a != b)
        {
            cout << edge.u << " - " << edge.v << " : " << edge.w << endl;
            total += edge.w;
            parent[a] = b;
        }
    }
    cout << "Total = " << total << endl;
}
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> edges(e);
    for(int i = 0; i < e; i++)
    {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }
    kruskal(edges, n);
    return 0;
}