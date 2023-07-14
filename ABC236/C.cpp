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
	vector<string> S(N), T(M);
	for(int i = 0; i < N; ++i) cin >> S[i];
	for(int i = 0; i < M; ++i) cin >> T[i];
	vector<bool> flag(N, false);
	int m = 0;
	for(int n = 0; n < N; ++n){
		if(S[n] == T[m]) {
			flag[n] = true;
			m++;
		}
		else{
			flag[n] = false;
		}
	}
	for(auto b : flag) {
		if(b) cout << "Yes" << endl;
		else cout << "No" << endl;
	}




}




