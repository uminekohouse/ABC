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
	LL L, R; cin >> L >> R;
	if(R-L>2020){ 
		cout << 0 << endl;
		return 0;
	}
	long long res = 2018;
	for(LL i = L; i < R; ++i){
		for(LL j = i+1; j <= R; ++j){
			res = min(res, (i*j)%2019);
		}
	}
	cout << res << endl;
}
