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


void towerOfHanoi(int n, int left, int right, int middle, vector<pair<int, int>> &v){
	if(n == 1){
		v.push_back(make_pair(left, right));
		return;
	}
	// count++;
	towerOfHanoi(n-1, left, middle, right, v);
	v.push_back(make_pair(left, right));
	towerOfHanoi(n-1, middle, right, left, v);
	// v.push_back(make_pair(middle, right));
}
void solve()
{	

	int n; cin >> n;
	vector<pair<int, int>> v;
	towerOfHanoi(n, 1, 3, 2, v);
	cout << v.size() << endl;
	for(auto x: v){
		cout << x.first << " " << x.second << endl;
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

