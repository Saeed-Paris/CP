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
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if( m == 0){
            cout << 0 << '\n';
            continue;
        }
        int i = 0;
        int sum = 0;
        n = n*2;
        while(sum < m && n > 0){
            sum += n/2;
            i++;
            n--;
        }
        cout << i << '\n';
    }

    return 0;
}
