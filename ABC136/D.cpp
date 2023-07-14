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
	string S; cin >> S;
	vector<int> check({0});
	for(int i = 1; i < (int)S.size(); ++i){
		if(S[i-1]=='R'&&S[i]=='L') check.push_back(i);
		if(S[i-1]=='L'&&S[i]=='R') check.push_back(i);
	}
	check.push_back((int)S.size());
	vector<int> ans(S.size(), 0);
	for(int i = 1; i < check.size(); i+=2){
		int R_size = check[i] - check[i-1];
		int L_size = check[i+1] - check[i];
		int R = (R_size+1)/2 + L_size/2;
		int L = (L_size+1)/2 + R_size/2;
		int tmp = check[i];
		ans[tmp-1] = R; ans[tmp] = L;
	}
	for(int i = 0; i < S.size(); ++i){
		if(i!=S.size()-1) cout << ans[i] << " ";
		else cout << ans[i] << endl;
	}
}
