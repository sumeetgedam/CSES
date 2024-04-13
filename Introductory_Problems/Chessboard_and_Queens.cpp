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
	if(a.second == b.second){
		return a.first < b.first;
	}
	return a.second < b.second;
}

bool canPlace(int n, int row, int col, vector<string> &v){
	if(v[row][col] == '*'){
		return false;
	}
	for(int i = 0; i < row; i++){
        if(v[i][col] == 'Q'){
            return false;
        }
    }
    for(int i = row - 1, j = col - 1;i >=0 && j >= 0; --i,--j){
        if(v[i][j] == 'Q'){
            return false;
        }
    }
    for(int i = row-1, j = col+1;i>=0 && j < n; --i, ++j){
        if(v[i][j] == 'Q'){
            return false;
        }
    }
    return true;

}

void NQueen(int n , int row, vector<string> &v, int &count){
	if(row == n){
		count++;
		return;
	}

	for(int col = 0; col < n; col++){
		if(canPlace(n, row, col, v)){

			v[row][col] = 'Q';
			NQueen(n, row+1,v, count);
			v[row][col] = '.';
		}
	}

}

void solve()
{	
    // https://cses.fi/problemset/result/9000967/
	vector<string> v(8); cin >> v;
	int count = 0;
	NQueen(8, 0, v, count);
	cout << count << endl;
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

