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

LL func(vector<LL>A, LL b){
	LL res = 0;
	for(auto v : A){
		res += abs(v - b);
	}
	return res;
}

int main(){
	LL N; cin >> N;
	vector<LL> A(N, 0);
	for(LL i = 0; i < N; ++i){
		LL tmp; cin >> tmp;
		A[i] = tmp - i - 1;
	}
	sort(A.begin(), A.end());
	LL ans = 0;
	if(N%2==0){
		LL b = A[N/2-1];
		ans = func(A, b);
		b++;
		ans = min(ans, func(A, b));
	}
	else{
		LL b = A[(N-1)/2];
		ans = func(A, b);
	}
	cout << ans << endl;
}



