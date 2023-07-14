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

int r, s, p;

int janken(char c){
	if(c=='r') return p;
	else if(c=='s') return r;
	else return s;
}

int main(){
	int N, K; cin >> N >> K;
	cin >> r >> s >> p; 
	string T; cin >> T;
	
	vector<string> mod_hand(K);
	for(int i = 0; i < N; ++i){
		mod_hand[i%K].push_back(T[i]);
	}
	int ans = 0;
	for(int i = 0; i < K; ++i){
		int scale = mod_hand[i].size();
		bool flag = false;
		for(int j = 0; j < scale; ++j){
			if(j>0&&mod_hand[i][j] == mod_hand[i][j-1]){
				if(flag) {
					ans += janken(mod_hand[i][j]);
					flag = false;
				}
				else flag = true;
			}
			else if(j==0){
			   	ans += janken(mod_hand[i][j]);
			}
			else{
			   	ans += janken(mod_hand[i][j]);
				flag = true;
			}
		}
	}

	cout << ans << endl;

}
