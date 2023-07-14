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
	string S, T; cin >> S >> T;
	int N = S.size();

	vector<int> diff(N, 0);
	for(int i = 0; i < N; ++i){
		diff[i] = (T[i] + 26 - S[i]) % 26;
	}
	bool flag = true;
	int check_num = diff[0];
	for(auto v : diff){
		if(v != check_num) flag = false;
	}
	if(flag) cout << "Yes" << endl;
	else cout << "No" << endl;
}





