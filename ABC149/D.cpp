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
	int N, K; cin >> N >> K;
	int R, S, P; cin >> R >> S >> P;
	string T; cin >> T;
	vector<string> hands(K);
	for(int i = 0; i < N; ++i){
		hands[i%K].push_back(T[i]);
	}
	int ans = 0;
	for(int j = 0; j < K; ++j){
		vector<pair<char, int>> hand;
		int cnt = 1;
		hands[j].push_back('e');
		for(int i = 0; i < N+1; ++i){
			if(hands[j][i] == hands[j][i+1]){
				cnt += 1;
			}	
			else{
				hand.push_back(make_pair(hands[j][i], cnt));
				cnt = 1;
			}
		}
		for(auto p : hand){
			char now_h = p.first;
			int now_c = p.second;
			if(now_c % 2 == 0) now_c /= 2;
			else if(now_c % 2 == 1) now_c = (now_c+1)/2;

			if(now_h == 'e') break;
			else if(now_h == 'r') ans += P * now_c;
			else if(now_h == 's') ans += R * now_c;
			else if(now_h == 'p') ans += S * now_c;
		}	
	}
	cout << ans << endl;

		
}
