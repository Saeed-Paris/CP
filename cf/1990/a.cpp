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
    int t ;
    t = 1;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int arr[n];
        unordered_map<int, int> countMap;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            countMap[arr[i]]++;
        }

        bool flag = false;
        vector<pair<int, int>> countVec(countMap.begin(), countMap.end());
        sort(countVec.begin(), countVec.end(), 
             [](const auto& a, const auto& b) { return a.first > b.first; });
        for (const auto& pair : countVec) {
            if(pair.second % 2 == 1) {
                flag = true;
            }
        }
        cout << (flag ? "YES" : "NO") << '\n';
    }
    return 0;
}
