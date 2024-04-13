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


void permute(string &a, int l, int r, set<string> &ans){
	if(l == r){
		ans.insert(a);
	}
	for(int i = l; i <= r; i++){
		swap(a[l], a[i]);
		permute(a, l+1, r, ans);
		swap(a[l], a[i]);
	}
}
void solve()
{	
	// https://cses.fi/problemset/result/8993999/
    // asking to generate all possible unique permutaions of given string
	string a; cin >> a;
	set<string> ans;
	permute(a, 0 ,a.length()-1, ans);
	cout << ans.size() << endl;
	for(auto x: ans){
		cout << x << endl;
	}
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

