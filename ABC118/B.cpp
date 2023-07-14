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
	vector<int> foods(M, 0);
	for(int i = 0; i < N; ++i){
		int K; cin >> K;
		for(int j = 0; j < K; ++j){
			int A; cin >> A;
			foods[A-1]++;
		}
	}
	int cnt = 0;
	for(auto v : foods) if(v == N) cnt++;
	cout << cnt << endl;
}
