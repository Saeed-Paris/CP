#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <string>
#include <cmath>

using namespace std;

int print(int x)
{
    cout << x << '\n';
    return 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {

        int n, a, b;
        cin >> n >> a >> b;

        if (a > b)
            cout << a * n << '\n';
        else
        {
            long long k = b - a;
            long long geroonCookie = min<long long int>(n, k);
            long long left, right;
            left = b;
            right = 1 + b - geroonCookie;
            // print(left);
            // print(right);
            long long pr = ((1 + left - right) * (left + right)) / 2;
            // print(pr);
            long long ma = a * max<long long int>(n - geroonCookie, 0);
            cout << pr + ma << '\n';
        }
    }

    return 0;
}