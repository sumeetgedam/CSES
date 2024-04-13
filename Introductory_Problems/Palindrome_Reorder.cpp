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
	if(a.second == b.second){
		return a.first < b.first;
	}
	return a.second < b.second;
}


void solve()
{	
    // https://cses.fi/problemset/result/9000356/
	string a; cin >> a;
	int odd = 0;
	unordered_map<char, int> m;
	for(auto x: a){
		m[x]++;
	}
	for(auto x: m){
		if(x.second % 2){
			odd++;
		}
	}
	if(odd > 1){
		cout << "NO SOLUTION" << endl;
		return;
	}
	vector<pair<char, int>> vp;
	for(auto x : m){
		vp.push_back(x);
	}
	sort(vp.begin(), vp.end(), cmp);
	string ans = "";
	for(auto x: vp){
		if(x.second %2 == 0){
			for(int i = 0; i < x.second/2;i++){
				ans += x.first;
			}
		}
	}
	for(auto x: vp){
		if(x.second %2){
			for(int i = 0; i < x.second;i++){
				ans += x.first;
			}
		}
	}
	sort(vp.begin(), vp.end(), comp);
	for(auto x: vp){
		if(x.second %2 == 0){
			for(int i = 0; i < x.second/2;i++){
				ans += x.first;
			}
		}
	}
	cout << ans << endl;
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
	// int T;
	// cin>>T;
	// cin.ignore(); // must be there when using getline(cin, s)
	// while(T--){
		solve();
	// }
	return 0;
}

