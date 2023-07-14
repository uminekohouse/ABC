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
	//input
	int N; cin >> N;
	vector<long long> p(N);
	for(int i = 0; i < N; ++i) cin >> p[i];

	//define DP-table
	vector<vector<bool>> dp(N, vector<bool> (10010, false));
	//initial conditions
	dp[0][0] = true; dp[0][p[0]] = true;
	//DP-loop
	for(int i = 1; i < N; ++i){
		for(int j = 0; j < 10010; ++j){
			if(dp[i-1][j]){
				dp[i][j] = true;
				dp[i][j+p[i]] = true;
			}
		}
	}
	//cnt
	int ans = 0;
	for(auto b : dp[N-1]) if(b) ans++;
	//output 
	cout << ans << endl;

}




