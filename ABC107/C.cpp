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
	int N, K; cin >> N >> K;
	vector<int> x(N);
	for(int i = 0; i < N; ++i) cin >> x[i];
	int ans = 100000000;
	for(int i = 0; i + K-1 < N; i++){
		int tmp = abs(x[i]) + abs(x[i] - x[i+K-1]);
		if(tmp < ans){
		   	ans = tmp;
		}
	}
	cout << ans << endl;
}
