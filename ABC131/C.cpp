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

long long GCD(long long A, long long B){
	if(B==0) return A;
	else return GCD(B, A%B);
}

long long LCM(long long A, long long B){
	return A/GCD(A, B)*B;
}

int main(){
	long long A, B, C, D; cin >> A >> B >> C >> D;
	long long cnt_C, cnt_D, cnt_E;
	cnt_C = B/C - (A-1)/C;
	cnt_D = B/D - (A-1)/D;
	long long E = LCM(C, D);
	cnt_E = B/E - (A-1)/E;
	long long ans = B - A + 1 - cnt_C - cnt_D + cnt_E;
	cout << ans << endl;
}

