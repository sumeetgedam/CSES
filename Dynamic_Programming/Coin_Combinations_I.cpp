#include <bits/stdc++.h>

using namespace std;

long long MOD = 1e9 + 7;

void solve()
{	
	// TLE
	int n, x; cin >> n >> x;
	vector<int> coins(n), dp((int)1e6 + 5, 0);
	for(int i = 0;i < n; i++){
		cin >> coins[i];
	}
	dp[0] = 1;
	for(int i = 1; i <= x; i++){
		for(int j = 1; j <= n; j++){
			if(i >= coins[j-1]){
				dp[i] = ( dp[i] + dp[i-coins[j-1]]) % MOD;
			}
		}
	}
	cout << dp[x] % MOD << '\n';
	
	return;
}


int main()
{
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w", stdout);
	#endif
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// int T; cin>>T;
	// cin.ignore(); // must be there when using getline(cin, s)
	// while(T--){
		// time(&start);
		solve();
	// }
	return 0;
}

