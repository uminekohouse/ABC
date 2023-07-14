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
	bool flag = true;
	if(S[0]==S[1]||S[1]==S[2]||S[2]==S[3]) flag = false;
	if(flag) cout << "Good" << endl;
	else cout << "Bad" << endl;
}
