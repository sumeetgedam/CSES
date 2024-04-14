#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int

#define inf 1000000000000000001;

// #define mem(a,val) memset(a,val,sizeof(a))

using namespace std;
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} //__gcd 
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}

long long mod = 1e9 + 7;
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

// int max_element(vector<pair<ll, ll>> vp){
// 	ll temp = 0;
// 	for(auto x: vp){
// 		if(x.second > temp){
// 			temp = x.second;
// 		}
// 	}
// 	return temp;
// }


void solve()
{	
    // https://cses.fi/problemset/result/9008534/
	ll n, max_ans = INT_MIN; cin >> n;
	vector<pair<ll, ll>> vp;
	for(int i = 0; i < n ; i++){
		ll a, b; cin >> a >> b;
		vp.push_back({a , 1}); // in
		vp.push_back({b, 0});// out
	}
	sort(vp.begin(), vp.end());

	ll in = 0;

	for(auto x: vp){
		if(x.second == 1){
			in++;
		}else{
			in--;
		}
		max_ans = max(max_ans, in);
	}
	
	cout << max_ans << endl;
	return;
    
    // TLE solution
    // int last_exit = max_element(vp);
    // for(int i = 1; i <= last_exit; i++){
	// 	for(auto it : vp){
	// 		if(it.first == i){
	// 			in++;
	// 		}
	// 		if(it.second == i){
	// 			in--;
	// 		}
	// 	}
	// 	max_ans = max(max_ans, in);
	// }
	
	// cout << max(max_ans, in) << endl;

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
	// int T;
	// cin>>T;
	// cin.ignore(); // must be there when using getline(cin, s)
	// while(T--){
		solve();
	// }
	return 0;
}

