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
	double ans = 0;
	for(int i = 0; i < N; ++i){
		double money; string S;
		cin >> money >> S;
		if(S=="JPY") ans += money * 1.0;
		else ans += money * 380000.0;
	}
	printf("%.10f\n", ans);
}
