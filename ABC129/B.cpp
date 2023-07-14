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
	vector<int> W(N);
	for(int i = 0; i < N; ++i) cin >> W[i];
	vector<int> sum(N+1, 0);
	for(int i = 0; i < N; ++i) sum[i+1] = sum[i] + W[i];
	int ans = *max_element(W.begin(), W.end());
	for(int i = 2; i < N; ++i){
		int left = sum[i];
		int right = sum[N] - sum[i];
		ans = min(ans, abs(right - left));
	}
	cout << ans << endl;
}
