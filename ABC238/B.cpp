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
	vector<int> A(N);
	for(int i = 0; i < N; ++i) cin >> A[i];
	vector<int> cut;
	cut.push_back(0);
	for(int i = 0; i < N; ++i){
		int tmp = cut[(int)cut.size()-1];
		cut.push_back((tmp+A[i])%360);
	}
	sort(cut.begin(), cut.end());
	vector<int> S;
	for(int i = 0; i < N; ++i){
		S.push_back(cut[i+1]-cut[i]);
	}
	S.push_back(360-cut[N]);
	sort(S.rbegin(), S.rend());
	cout << S[0] << endl;
}





