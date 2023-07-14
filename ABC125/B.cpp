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
	LL N; cin >> N;
	vector<LL> hito(5);
	for(int i = 0; i < 5; ++i) cin >> hito[i];
	LL m = *min_element(hito.begin(), hito.end());
	LL ans = N/m;
	if(N%m!=0) ans++; 
	cout << ans+4 << endl;

}
