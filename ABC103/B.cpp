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
	for(int i = 0; i < N; ++i){
		bool flag = true;
		for(int j = 0; j < N; ++j){
			if(S[(i+j)%N] != T[j]) flag = false;
		}
		if(flag){
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
}	




