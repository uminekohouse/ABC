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
	bool flag;
	if(S[0] == 'A') flag = true; else flag = false;
	int cnt = 0;
	if(S[1]=='C'||S[S.size()-1]=='C') flag = false;
	for(int i = 1; i < (int)S.size(); ++i){
		if(S[i] == 'C') cnt++;
		else{
			int tmp = S[i] - 'a';
			if(tmp >= 26) flag = false;
		}
	}
	if(cnt != 1) flag = false;

	if(flag) cout << "AC" << endl;
	else cout << "WA" << endl;
}	





