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
	vector<int> town(5,0); 
	for(int i = 0; i < 5; ++i) cin >> town[i];
	int k; cin >> k;
	bool flag = true;
	for(auto a : town){
		for(auto b : town){
			if(abs(a-b)>k) flag = false;
		}
	}
	if(flag) cout << "Yay!" << endl;
	else cout << ":(" << endl;
}
