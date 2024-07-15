#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    // t = 1;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int i = 0;
        while (n != 1)
        {
            n = max(n - (k - 1), 1);
            i++;
        }
        cout << i << '\n';
    }
    return 0;
}