#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int mx, sec;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    cout << v[n - 1] + v[n - 2];

    return 0;
}