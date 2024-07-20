#include <bits/stdc++.h>

using namespace std;

long long MOD = 1e9 + 7;


void solve()
{	
    // TLE
	int n, x; cin >> n >> x;
	vector<int> coins(n);
	for(int i = 0;i < n; i++){
		cin >> coins[i];
	}
	vector<vector<int>> dp(n+1, vector<int>(x+1));
	for(int i = 0; i <n ;i++){
		dp[i][0] = 1;
	}
	for(int i = n-1; i >=0; i--){
		for(int j = 1; j <=x; j++){
			int skip = dp[i+1][j];
			int pick = 0;
			if(coins[i] <= j){
				pick = dp[i][j-coins[i]];
			}
			dp[i][j] = (skip + pick) % MOD;
		}
	}
	cout << dp[0][x];
	
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

