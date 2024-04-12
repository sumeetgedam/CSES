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
    // https://cses.fi/problemset/result/3551048/
    // ll n, ans = 0 ;
	// cin >> n;
	// ll arr[n];
	// for(ll i =0; i < n;i++){
	// 	cin >> arr[i];
	// }
	// for(ll i = 1; i  < n; i++){
	// 	if(arr[i] < arr[i-1]){
	// 		ans += (arr[i-1] - arr[i]);
	// 		arr[i] += (arr[i-1] - arr[i]);
	// 	}
	// }
	// cout << ans << endl;

    // https://cses.fi/problemset/result/3551048/
	ll last = -1, ans = 0;
	int n; cin >> n;
	while(n--){
		ll x; cin >> x; // scan the number
		if(x < last){ // if current number is smaller than previous number 
			ans += last - x; // moves required to at least make them equal
			x = last; // updating x to as we are not modifying the array actually and will need x to update last veriable
		}
		last = x; // update previous number to current previous number
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

