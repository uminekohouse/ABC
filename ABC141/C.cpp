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
	int N, K, Q; cin >> N >> K >> Q;
	vector<int> A(N, K);
	for(int i = 0; i < Q; ++i){
		int tmp; cin >> tmp;
		A[tmp-1]++;
	}
	for(auto v : A){
		if(v-Q>0) cout << "Yes" << endl;
		else cout << "No" << endl;
	}


}



