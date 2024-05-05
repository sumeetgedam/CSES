#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

#define inf 1000000000000000001;

// #define mem(a,val) memset(a,val,sizeof(a))

using namespace std;
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} //__gcd 
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}

long long MOD = 1e9 + 7;
// Operator overloads
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }


/////////////////////////////////////////////////////////
// int powerof2(int x){
// 	return (x && !(x & (x-1)));
// }

bool cmp(pair<char, int> a, pair<char, int> b){
	if(a.second == b.second){
		return a.first > b.first;
	}
	return a.second > b.second;
}

bool comp(pair<char, int> a, pair<char, int> b){
	if(a.first == b.first){
		return a.second < b.second;
	}
	return a.first < b.first;
}



void solve()
{	
	// https://cses.fi/problemset/result/9170576/
	int n; cin >> n;
	vector<int> dp(n+1, 0);
	dp[0] = 1; // here we are talking about number of ways sum 0 can be achieved which is 1 as we dont pick any coin that is one way.
	for(int i = 1; i < n+1; i++){

		for(int j = 1; j <= 6; j++){
			if(j <= i){
				dp[i] = (dp[i] + dp[i-j]) % MOD;
			}
		}
	}
	cout << dp[n] << endl;
	return;
}


int main()
{
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w", stdout);
	#endif
	std::ios::sync_with_stdio(false);
	// cin.tie(NULL);
	// cout.tie(NULL);
	// int T; cin>>T;
	// cin.ignore(); // must be there when using getline(cin, s)
	// while(T--){
		solve();
	// }
	return 0;
}

