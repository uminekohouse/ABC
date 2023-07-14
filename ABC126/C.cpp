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
	int N, K; cin >> N >> K;
	double ans = 0;
	double kakuritsu = 1.0/N;
	for(int i = 1; i <= N; ++i){
		if(i>=K) ans += kakuritsu;
		else{
			int tmp = i;
			double tmp_kakuritsu = kakuritsu;
			while(tmp < K){
				tmp *= 2;
				tmp_kakuritsu *= 0.5;
			}
			ans += tmp_kakuritsu;
		}
	}
	printf("%.10f\n", ans);



}

