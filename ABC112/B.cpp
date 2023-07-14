#include<bits/stdc++.h>
#include<iostream>
using namespace std;
using LL = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
const long long LINF = 1LL << 60;
#define all(x) (x).begin(), (x).end()
#define rep(i,n) for(int i = 0; i < (n); ++i)
template<class T>void chmin(T&a, T b){if(a > b) a = b;}
template<class T>void chmax(T&a, T b){if(a < b) a = b;}

int main(){
	int N, T; cin >> N >> T;
	int ans = 100000;
	for(int i = 0; i < N; ++i){
		int c, t; cin >> c >> t;
		if(t <= T) ans = min(ans, c);
	}
	if(ans==100000) cout << "TLE" << endl;
	else cout << ans << endl;
}
