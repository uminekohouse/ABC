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
	int K, X; cin >> K >> X;
	for(int i = max(-1000000, X-K+1); i <= min(1000000, X+K-1); ++i){
		if(i!=min(1000000, X+K-1)) cout << i << " ";
		else cout << i << endl;
	}

}
