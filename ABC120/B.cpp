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
	vector<int> num;
	for(int i = 1; i <= min(A, B); ++i){
		if(A%i==0&&B%i==0) num.push_back(i);
	}
	cout << num[(int)num.size()-C] << endl;
}

