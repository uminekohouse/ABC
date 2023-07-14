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
	int N; cin >> N;
	vector<double> x(N, 0), y(N, 0);
	for(int i = 0; i < N; ++i) cin >> x[i] >> y[i];
	vector<int> seq(N);
	for(int i = 0; i < N; ++i) seq[i] = i;
	double ans = 0.0;
	do{
		for(int i = 1; i < N; ++i){
			double dx = x[seq[i]] - x[seq[i-1]];
			double dy = y[seq[i]] - y[seq[i-1]];
			ans += sqrt(dx*dx+dy*dy);
		}
	}while(next_permutation(seq.begin(), seq.end()));
	for(int i = 1; i <= N; ++i) ans /= i;
	printf("%.10f\n", ans);
}



