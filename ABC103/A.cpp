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
	vector<int> A(3);
	cin >> A[0] >> A[1] >> A[2];
	int ans = 100000;
	ans = min(ans, abs(A[0]-A[1])+abs(A[1]-A[2]));
	ans = min(ans, abs(A[0]-A[2])+abs(A[2]-A[1]));
	ans = min(ans, abs(A[1]-A[0])+abs(A[0]-A[2]));
	ans = min(ans, abs(A[1]-A[2])+abs(A[2]-A[0]));
	ans = min(ans, abs(A[2]-A[0])+abs(A[0]-A[1]));
	ans = min(ans, abs(A[2]-A[1])+abs(A[1]-A[0]));
	cout << ans << endl;
}




