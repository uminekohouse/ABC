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

bool judge(int num){
	if(num==1) return true;
	vector<pair<int, int>> res;
	for(int i = 2; i*i <= num; ++i){
		if(num%i != 0) continue;
		int ex = 0;
		while(num%i==0){
			ex++;
			num /= i;
		}
		res.push_back({i, ex});
	}
	if(num != 1) res.push_back({num, 1});

	bool flag = true;
	for(auto p : res) if(p.second%2 != 0) flag = false;
	return flag;
}




int main(){
	int N, D; cin >> N >> D;
	vector<vector<int>> X(N, vector<int>(D, 0));
	for(int i = 0; i < N; ++i){
		for(int j = 0; j < D; ++j){
			cin >> X[i][j];
		}
	}
	int cnt = 0;
	for(int i = 0; i < N-1; ++i){
		for(int j = i+1; j < N; ++j){
			int tmp = 0;
			for(int k = 0; k < D; ++k){
				tmp += (X[i][k] - X[j][k]) * (X[i][k] - X[j][k]);
			}
			if(judge(tmp)) cnt++;
		}
	}
	cout << cnt << endl;
}

