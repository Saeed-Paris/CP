#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int diff = 0;
		string s,p;
		cin >> s >> p;
		string ss = s,pp=p;
		sort(ss.begin(),ss.end());
		sort(pp.begin(),pp.end());
		cout << t << '\n' << ss << '\n' << pp<<'\n';
		if(pp == ss){
			for(int i = 0;i<n;i++){
				if(p[i] != s[i]){
					diff++;
				}
			}
			if(k>=diff/2 && ((k- diff/2) %2 == 0)){
				return cout << "YES" << '\n';

			}
		}
		cout << "NO" << '\n';
	}
}

