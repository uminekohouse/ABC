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
	int N, L; cin >> N >> L;
	vector<int> aji(N);
	for(int i = 0; i < N; ++i) aji[i] = L + i;
    int sum = 0;
	for(int i = 0; i < N; ++i) sum += aji[i];
	int ans = sum;
	int tmp = 1000;
	for(int i = 0; i < N; ++i){
		if(tmp>abs(aji[i])){
			tmp = abs(aji[i]);
			ans = sum - aji[i];
		}
	}
	cout << ans << endl;
}

