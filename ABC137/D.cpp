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
	int N = (int)S.size();
	vector<vector<int>> cnt(10000, vector<int>(N, 0));
	int tmp = 0;
	for(int i = 0; i < N; ++i) cnt[0][i] = 1;
	for(int i = 1; i < 10000; ++i){
		for(int j = 0; j < N; ++j){
			if(S[j]=='R') cnt[i][j+1] += cnt[i-1][j];
			else if(S[j]=='L') cnt[i][j-1] += cnt[i-1][j];
		}
		if(i%2==0&&i>1){
			bool flag = true;
			for(int j = 0; j < N; ++j){
				if(cnt[i-2][j] != cnt[i][j]) flag = false;
			}
			if(flag){
				tmp = i;
				break;
			}
		}
	}
	for(int i = 0; i < N; ++i){
		if(i!=N-1) cout << cnt[tmp][i] << " ";
		else cout << cnt[tmp][i] << endl;
	}

}
