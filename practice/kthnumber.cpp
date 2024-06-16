#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    cin.tie(0);

    vector<vector<string>> arr = {
        {"1", "1", "1", "1", "0"},
        {"1", "1", "0", "1", "0"},
        {"1", "1", "0", "0", "0"},
        {"0", "0", "0", "0", "0"}};

    int rows = arr.size();
    int cols = arr.size();

    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; r++)
        {
        }
    };

    vector<vector<int>> v;
    v.push_back({1, 2, 3, 5});
    v.push_back({0, 4});
    v.push_back({0, 5});
    v.push_back({0, 6});
    v.push_back({1, 7});
    v.push_back({0, 2, 7});
    v.push_back({3, 8});
    v.push_back({4, 5, 8});
    v.push_back({6, 7, 9});
    v.push_back({8});

    for (int i = 0; i < v.size(); i++)
    {
        bfs(v[0])
    }

    return 0;
}
