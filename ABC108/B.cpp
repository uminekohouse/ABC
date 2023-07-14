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
	vector<int> x(4), y(4);
	for(int i = 0; i < 2; ++i){
		cin >> x[i] >> y[i];
	}
	int dx = x[1] - x[0];
	int dy = y[1] - y[0];
	x[2] = x[1] - dy; y[2] = y[1] + dx;
	x[3] = x[2] - dx; y[3] = y[2] - dy;
	for(int i = 2; i < 4; ++i){
		cout << x[i] << " " << y[i];
		if(i==2) cout << " " ;
	}
	cout << endl;
}
