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
 
 
 
void solve()
{	
 
	// TLE : https://cses.fi/problemset/result/9034705/
	// int n, ans = 0, len = 0; cin >> n;
	// vector<int> songs;
	// for(int i = 0;  i < n; i++){
	// 	int s; cin >> s;
	// 	if(find(songs.begin(), songs.end(), s) != songs.end()){
	// 		len = songs.size();
	// 		ans = max(ans, len);
	// 		auto it  = find(songs.begin(), songs.end(), s);
	// 		songs.erase(songs.begin(), it+1 );
	// 		songs.push_back(s);
	// 	}else{
	// 		songs.push_back(s);
	// 	}
 
	// }
	// len = songs.size();
	// cout << max(ans, len) << endl;

    // https://cses.fi/problemset/result/9034737/
    int n, ans = 0, len = 0; cin >> n;
	map<int, int> mp;
	for(int i = 0;  i < n; i++){
		int s; cin >> s;
		if(mp.count(s)){
			len = max(mp[s]+1, len);
		}
		ans = max(ans, i - len + 1);
		mp[s] = i;

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