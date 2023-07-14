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
	int N = S.size();
	int s, e;
	int cnt_s = 0, cnt_e = 0;
	for(int i = 0; i < N; ++i){
		if(S[i] == 'a') cnt_s++;
		else{
			s = i;
			break;
		}
	}

	for(int i = N-1; i > -1; --i){
		if(S[i] == 'a') cnt_e++;
		else{
			e = i;
			break;
		}
	}
	string T;
	for(int i = s; i <= e; ++i){
		T += S[i];
	}
	string U = T;
	reverse(U.begin(), U.end());
	if(U == T && cnt_s <= cnt_e){
		cout << "Yes" << endl;
	}
	else cout << "No" << endl;

}



