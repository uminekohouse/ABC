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
	vector<int> item(N);
	for(int i = 0; i < N; ++i) cin >> item[i];
	sort(item.begin(), item.end());
	item[N-1] /= 2;
	int res = 0;
	for(auto v : item) res += v;
	cout << res << endl;
	


}
