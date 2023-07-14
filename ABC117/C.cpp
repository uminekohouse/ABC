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
	vector<int> X(M); 
	for(int i = 0; i < M; ++i) cin >> X[i];
	sort(X.begin(), X.end());
	vector<int> diffs(M-1);
	for(int i = 0; i < M-1; ++i) diffs[i] = X[i+1] - X[i];
	sort(diffs.rbegin(), diffs.rend());
	int ans = X[M-1] - X[0];
	for(int i = 0; i < min(N-1, M-1); ++i) ans -= diffs[i];
	cout << ans << endl;

	

}


