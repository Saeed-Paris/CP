#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n, a;
    cin >> n >> a;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int current = 0;
    for (auto x : v)
    {
        if (current < x)
        {
            current = x + a;
        }
        else
        {

            current += a;
        }
        cout << current << '\n';
    }

    return 0;
}