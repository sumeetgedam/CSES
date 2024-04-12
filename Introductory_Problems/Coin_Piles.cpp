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
    // https://cses.fi/problemset/result/8993792/
	ll a, b ;cin >> a >> b;
    // as per constraints given in question , we eed to total count to be multiple of 3
    // Also there will be some coins left out if one pile is more the twice the other ( as in one move the max we can take is 2 )
	if((a+b) %3 == 0 and max(a, b) <= 2 * min(a, b)){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
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
	int T;
	cin>>T;
	cin.ignore(); // must be there when using getline(cin, s)
	while(T--){
		solve();
	}
	return 0;
}

