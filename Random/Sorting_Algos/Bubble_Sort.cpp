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

void bubbleSort(vector<int> &a, int n){
	for(int i = n - 1; i>=0; i--){
		for(int j = 0; j <= i-1; j++){
			if(a[j] > a[j+1]){
				swap(a[j], a[j+1]);
			}
		}
	}
}

void solve()
{	
	vector<int> a = {13, 46, 24, 52, 20, 9};
	int n = a.size();
	bubbleSort(a, n);
	for(auto x: a){
		cout << x << " ";
	}
	cout << endl;
	return;
}


int main()
{
	
	#ifndef SMG
	freopen("input.txt","r", stdin);
	freopen("output.txt","w", stdout);
	#endif
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// int T; cin>>T;
	// cin.ignore(); // must be there when using getline(cin, s)
	// while(T--){
		solve();
	// }
	return 0;
}

