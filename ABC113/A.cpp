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
	int N; double T, A; cin >> N >> T >> A;
	vector<double> temper(N);
	for(int i = 0; i < N; ++i){
		double x; cin >> x;
		temper[i] = T - x * 0.006;
	}
	int ans = 0;
	double diff = 100000.00;
	for(int i = 0; i < N; ++i){
		if(diff > abs(A-temper[i])){
			ans = i+1;
			diff = abs(A-temper[i]);
		}
	}
	cout << ans << endl;
}


