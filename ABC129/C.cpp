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
	int N, M; cin >> N >> M;
	vector<LL> dp(N+1, 0);
	set<int> star;
	for(int i = 0; i < M; ++i){
	   int a; cin >> a;
	   star.insert(a);
	}
	LL mod = 1000000007;
	if(!star.count(1)) dp[1] = 1;
	if(!star.count(2)) dp[2] = 1;
	for(int i = 1; i < N; ++i){
		if(star.count(i)) continue;
		//一個上について考える
		if(!star.count(i+1)){
			dp[i+1] += dp[i];
			dp[i+1] %= mod;
		}
		//2個上について考える
		if(i<N-1&&!star.count(i+2)){
			dp[i+2] += dp[i];
			dp[i+2] %= mod;
		}	
	}
	cout << dp[N] << endl;
}

