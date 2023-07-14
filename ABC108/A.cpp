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
	int K; cin >> K;
	int ans = 0;
	if(K%2==0){
		int tmp = K/2;
		ans = tmp*tmp;
	}
	else{
		int tmp = (K-1)/2;
		ans = tmp * (tmp+1);
	}
	cout << ans << endl;
}




