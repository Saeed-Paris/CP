#include <iostream>
#include <list>
#include <vector>
#include <limits.h>

using namespace std;
int ans;
int m = INT_MAX;
void dfs(int s, const vector<int> adjList[], bool visited[], int cost[])
{

    if (visited[s])
        return;
    visited[s] = 1;
    // m = min(cost[s], m);
    for (auto neigh : adjList[s])
    {
        dfs(neigh, adjList, visited, cost);
    }
}
int main()
{
    int v, n;
    int cost[v + 1];
    vector<int> adj[v + 1];
    bool visited[v + 1];
    cin >> v >> n;
    for (int i = 0; i < v; i++)
    {
        cin >> cost[i];
    }
    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 0; i < v; i++)
    {
        dfs(i, adj, visited, cost);
        // ans += m;
        // m = INT_MAX;
    }
}
