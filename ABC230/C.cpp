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
	int N, Q; cin >> N >> Q;
	vector<int> A(N);
	vector<int> x(Q);
	for(int i = 0; i < N; ++i) cin >> A[i];
	for(int i = 0; i < Q; ++i) cin >> x[i];
	
	sort(A.begin(), A.end());
	for(int i = 0; i < Q; ++i){
		int itr = lower_bound(A.begin(), A.end(), x[i]) - A.begin();
		int res =  N - itr;
		cout << res << endl;
	}
}




