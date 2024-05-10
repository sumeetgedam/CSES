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

void merge(vector<int> &a, int low, int mid, int high){
	vector<int> temp;
	int left = low, right = mid+1;

	while(left <= mid and right <= high){
		if(a[left] <= a[right]){
			temp.push_back(a[left]);
			left++;
		}else{
			temp.push_back(a[right]);
			right++;
		}
	}

	while(left <= mid){
		temp.push_back(a[left]);
		left++;
	}
	while(right <= high){
		temp.push_back(a[right]);
		right++;
	}
	for(int i = low; i <= high; i++){
		a[i] = temp[i-low];
	}
}
void mergeSort(vector<int> &a, int low, int high){
	if(low >= high){
		return;
	}
	int mid = low + (high-low)/2;
	mergeSort(a, low, mid);
	mergeSort(a, mid+1, high);
	merge(a, low, mid, high);
}

void solve()
{	
	vector<int> a = {13, 46, 24, 52, 20, 9};
	int n = a.size();
	mergeSort(a, 0, n-1);
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

