#include<bits/stdc++.h>
#include<iostream>
using namespace std;
/*
using LL = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
*/
const long long LINF = 1LL << 60;
#define all(x) (x).begin(), (x).end()
#define rep(i,n) for(int i = 0; i < (n); ++i)
template<class T>void chmin(T&a, T b){if(a > b) a = b;}
template<class T>void chmax(T&a, T b){if(a < b) a = b;}

int main(){
	string X; cin >> X;
	long long N = stol(X);
	if(0<=N&&N<=9){
		cout << 0 << endl;
		return 0;
	}
	if(X[0] == '-'&&X[(int)X.size()-1]!='0') N -= 10;
	X = to_string(N);
	for(int i = 0; i < (int)X.size()-1; ++i){
		cout << X[i];
	}
	cout << endl;

}





