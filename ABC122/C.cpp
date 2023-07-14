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
	int N, Q; cin >> N >> Q;
	string S; cin >> S;
	vector<int> sum(N+1, 0);
	for(int i = 1; i < N; ++i){
		if(S[i-1]=='A'&&S[i]=='C') sum[i+1] =+  1;
		sum[i+1] += sum[i];
	}	
	for(int q = 0; q < Q; ++q){
		int l, r; cin >> l >> r;
		cout << sum[r] - sum[l] << endl;
	}
}
