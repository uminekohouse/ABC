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
	int ans0 = 0, ans1 = 0;
	for(int i = 0; i < N; ++i){
		//010..パターン
		if(i%2==0&&S[i]!='0') ans0++;
		else if(i%2==1&&S[i]!='1') ans0++;
		//101..パターン
		if(i%2==0&&S[i]!='1') ans1++;
		else if(i%2==1&&S[i]!='0') ans1++;
	}
	cout << min(ans0, ans1) << endl;
}

