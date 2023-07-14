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
	int N, M, X; cin >> N >> M >> X;
	vector<int> C(N, 0);
	vector<vector<int>> A(N, vector<int>(M, 0));
	for(int i = 0; i < N; ++i){
		cin >> C[i];
		for(int j = 0; j < M; ++j) cin >> A[i][j];
	}

	int ans = 100100100;

	for(int bit = 0; bit < (1<<N); ++bit){
		vector<int> state(M, 0);
		int sum = 0;
		for(int i = 0; i < N; ++i){
			if(bit & (1 << i)){
				sum += C[i];
				for(int j = 0; j < M; ++j){
					state[j] += A[i][j];
				}
			}
		}
		bool flag = true;
		for(auto v : state) if(v < X) flag = false;
		if(flag) ans = min(ans, sum);
	}
	
	if(ans != 100100100) cout << ans << endl;
	else cout << -1 << endl;
}

