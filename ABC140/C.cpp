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
	vector<int> A(N, 0), B(N-1, 0);
	for(int i = 0; i < N-1; ++i) cin >> B[i];
	if(N==2){
		cout << B[0]*2 << endl;
		return 0;
	}
	A[0] = B[0], A[N-1] = B[N-2];
	for(int i = 0; i < N-2; ++i){
		A[i+1] = min(B[i], B[i+1]);
	}
	int sum = 0; 
	for(auto v : A) sum += v;
	cout << sum << endl;
}



