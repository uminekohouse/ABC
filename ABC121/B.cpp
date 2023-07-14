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
	int N, M, C; cin >> N >> M >> C;
	vector<int> B(M);
	for(int i = 0; i < M; ++i) cin >> B[i];
	vector<vector<int>> A(N, vector<int>(M, 0));
	for(int i = 0; i < N; ++i){
		for(int j = 0; j < M; ++j){
			cin >> A[i][j];
		}
	}
	int ans = 0;
	for(int i = 0; i < N; ++i){
		int sum = 0;
		for(int j = 0; j < M; ++j){
			sum += A[i][j] * B[j];
		}
		sum += C;
		if(sum > 0) ans++;
	}

	cout << ans << endl;
}
