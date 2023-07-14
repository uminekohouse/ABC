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
	int N; cin >> N;
	vector<int> h(N);
	for(int i = 0; i < N; ++i) cin >> h[i];
	int ans = 1;
	int H = h[0];
	for(int i = 1; i < N; ++i){
		if(H<=h[i]) ans++;
		H = max(H, h[i]);
	}
	cout << ans << endl;
}
