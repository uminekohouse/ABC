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
	int A, B, C; cin >> A >> B >> C;
	int ans = 0;
	ans = max(ans, A*10+B+C);
	ans = max(ans, A+B*10+C);
	ans = max(ans, A+B+C*10);
	cout << ans << endl;
}




