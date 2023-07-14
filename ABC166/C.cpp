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


LL GCD(LL N, LL K){
	if(K == 0) return N;
	else return GCD(K, N%K);
}

int main(){
	LL N, K; cin >> N >> K;
	LL res = GCD(N, K);
	res = min(K-res, res);
	cout  << res << endl;
}

