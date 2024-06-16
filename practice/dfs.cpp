#include <iostream>
#include <list>
#include <vector>

using namespace std;
const int N = {7};
vector<int> adj[N];
bool visited[N];
void dfs(int s)
{
    if (visited[s])
        return;
    visited[s] = 1;
    cout << s << '\n';
    for (auto u : adj[s])
    {
        dfs(u);
    }
};

int main()
{

    adj[1].push_back(2);
    adj[2].push_back(1); // since it's undirected

    adj[1].push_back(3);
    adj[3].push_back(1); // since it's undirected

    adj[3].push_back(4);
    adj[4].push_back(3); // since it's undirected

    adj[2].push_back(6);
    adj[6].push_back(2); // since it's undirected

    adj[3].push_back(6);
    adj[6].push_back(3); // since it's undirected

    adj[4].push_back(5);
    adj[5].push_back(4); // since it's undirected

    dfs(1);
    // 126345
    return 0;
};
