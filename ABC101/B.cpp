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

int func(int N){
	int res = 0;
	while(N){
		res += N % 10;
		N /= 10;
	}
	return res;
}

int main(){
	int N; cin >> N; 
	int S = func(N);
	if(N%S==0) cout << "Yes" << endl;
	else cout << "No" << endl;
}





