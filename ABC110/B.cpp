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
	int N, M, X, Y;
	cin >> N >> M >> X >> Y;
	vector<int> x(N+1), y(M+1);
	for(int i = 0; i < N; ++i) cin >> x[i];
	for(int i = 0; i < M; ++i) cin >> y[i];
	x[N] = X; y[M] = Y;
	sort(x.begin(), x.end());
	sort(y.begin(), y.end());
	if(x[N] < y[0]) cout << "No War" << endl;
	else cout << "War" << endl;
}
