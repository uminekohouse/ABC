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
	int N; cin >> N;
	string S; cin >> S;
	int l = 0, r = N;
	vector<int> res(N+1, 0);
	for(int i = 0; i < N; ++i){
		if(S[i]=='L'){
			res[r] = i;
			r--;
		}
		else{
			res[l] = i;
			l++;
		}
	}
	res[l] = N;
	for(auto v : res) cout << v << endl;
		


}




