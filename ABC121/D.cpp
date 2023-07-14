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

long long GCD(long long a, long long b){
	if(b == 0) return a;
	else return  GCD(b, a%b);
}

int main(){
	int N; cin >> N;
	long long X; cin >> X;
	long long res = 0;
	for(int i = 0; i < N; ++i){
		long long x; cin >> x;
		res = GCD(res, abs(x - X));
	}
	cout << res << endl;
}



