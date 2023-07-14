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
	vector<int> p(N);
	for(int i = 0; i < N; ++i){
		cin >> p[i];
	}
	int cnt = 0;
	for(int i = 0; i < N; ++i){
		if(p[i] != i+1) cnt++;
	}
	if(cnt == 2 || cnt == 0) cout << "YES" << endl;
	else cout << "NO" << endl;
}

