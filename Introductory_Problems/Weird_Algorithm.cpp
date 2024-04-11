#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define mod 1e9 + 7
#define inf 1000000000000000001;
 
// #define mem(a,val) memset(a,val,sizeof(a))
 
using namespace std;
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} //__gcd 
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
 
// Operator overloads
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }
 
 
/////////////////////////////////////////////////////////
// int powerof2(int x){
// 	return (x && !(x & (x-1)));
// }
 
 
 
void solve()
{	
 
	ll n; cin >> n;
    // https://cses.fi/problemset/result/3550876/
    // cout << n << " ";
	// while(n > 1){
	// 	if(n%2 == 0){
	// 		n /= 2;
	// 		cout << n << " ";
	// 	}else if(n%2 != 0){
	// 		n  = n*3 + 1;
	// 		cout << n << " ";
	// 	}
	// }
	// cout << endl;
    
    // https://cses.fi/problemset/result/8981111/
	while(n != 1){
		cout << n << " ";
		if(n%2 == 0){
			n/=2;
		}else{
			n = n*3 + 1;
		}
 
	}
	cout << 1;
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
	// int T;
	// cin>>T;
	// cin.ignore(); // must be there when using getline(cin, s)
	// while(T--){
		solve();
	// }
	return 0;
}
