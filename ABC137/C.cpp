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
	LL N; cin >> N;
	map<vector<LL>, LL> cnt;
	for(LL i = 0; i < N; ++i){
		string S; cin >> S;
		vector<LL> alphabet(26, 0);
		for(auto c : S) alphabet[c-'a']++;
		cnt[alphabet] += 1;
	}
	LL ans = 0;
	for(auto m : cnt){
		LL tmp = m.second;
		ans += tmp*(tmp-1)/2;
	}
	cout << ans << endl;
}



