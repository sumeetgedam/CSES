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
    // one way is to cal calculate the factorial and then find the number of trailing zeroes in a number by repeatedly dividing it by 10 until its last digit becomes non-zero.

    // https://cses.fi/problemset/result/8993305/
    // number of zeros in factorial depends on minimum of number of time 5 and 2 (prime factors) have occured till we reach that number
    // now we know in a factorial min highest power of 2 is always going to be less than or equal to the highest power of 5
    // so we need to find highest power of 5 in n!for which we have 
    // The highest power of a prime number p, present in any factorial is given by a formula known as Legendre’s Formula, 
    
	ll n; cin >> n;
	ll zeros = 0, power = 5;
	for(int i = 1;;i++){
		zeros += (n/power);
		if(n/power == 0){
			break;
		}
		power *= 5;
	}
	cout << zeros << endl;
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

