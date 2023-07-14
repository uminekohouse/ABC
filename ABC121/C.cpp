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
	long long N, M; cin >> N >> M;
	vector<pair<long long, long long>> drink;
	for(long long i = 0; i < N; ++i){
		long long A, B; cin >> A >> B;
		drink.push_back(make_pair(A, B));
	}
	sort(drink.begin(), drink.end());
	long long res = 0;
	for(auto v : drink){
		long long a = v.first, b = v.second;
		res += a * min(b, M);
		M -= b;
		if(M <= 0) break;
	}
	cout << res << endl;

		

}
