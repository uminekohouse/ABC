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
	int N, X; cin >> N >> X;
	vector<int> L(N);
	for(int i = 0; i < N; ++i) cin >> L[i];
	vector<int> p;
	p.push_back(0);
	for(int i = 0; i < N; ++i){
		int tmp = p[(int)p.size()-1];
		tmp += L[i];
		p.push_back(tmp);
	}
	int ans = 0;
	for(auto v : p){
		if(v <= X) ans++;
		else break;
	}
	cout << ans << endl;

}
