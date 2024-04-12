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



void solve()
{	
    // https://cses.fi/problemset/result/8993520/
	ll n, sum_till_n = 0;cin >> n;

	for(ll i=1;i<=n;i++){
		sum_till_n += i;
	}
	if(sum_till_n&1){ // if the sum is odd we won't be able to divide them into 2 equal parts 
		cout << "NO" << endl; return;
	}else{
		vector<int> ans(n+1, 0);
		ll sum_nby2 = sum_till_n / 2;
		ll count = 0, i = n;
		while(i > 0){ // try picking elements which can add up to sum / 2 ( as we need to equal sum parts)
			if(sum_nby2 >= i){
				sum_nby2 -= i;
				ans[i] = true;
				count++;
			}
			i--;
		}
		if(sum_nby2 == 0){ // if we reach the end and required sum is achieved we have our answer which can be printed
			cout << "YES" << endl;
			cout << count << endl;
			for(int i = 1; i <= n; i++){
				if(ans[i]){
					cout << i << " ";
				}
			}
			cout << endl;
			cout << n - count << endl;
			for(int i = 1; i <= n; i++){
				if(!ans[i]){
					cout << i << " ";
				}
			}
			cout << endl;
		}

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

