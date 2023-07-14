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
	vector<int> L(N);
	int sum_L = 0;
	for(int i = 0; i < N; ++i){
	   cin >> L[i];
	   sum_L += L[i];
	}
	
	bool flag = true;
	for(int i = 0; i < N; ++i){
		if(L[i] >= sum_L - L[i]) flag = false;
	}
	if(flag) cout << "Yes" << endl;
	else cout << "No" << endl;
}
