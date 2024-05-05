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
    // https://cses.fi/problemset/result/9170657/
	
	int n, x; cin >> n >> x;
	vector<int> c(n); cin >> c;

	vector<int> dp(x+1, 1e9);
	dp[0] = 0; // as we are talking  about coins taken so number of coins required to make sum 0 is 0
	for(int i = 1; i < x+1; i++){

		for(auto j:c){
			if(j <= i){
				dp[i] = min(dp[i] , 1 + dp[i-j]);
			}
		}
	}
	cout << (dp[x] >= 1e9?-1:dp[x]) << endl;
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

