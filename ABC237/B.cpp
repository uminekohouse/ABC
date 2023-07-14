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
	int H, W; cin >> H >> W;
	vector<vector<int>> matrix(H, vector<int>(W));
	for(int i = 0; i < H; ++i){
		for(int j = 0; j < W; ++j){
			cin >> matrix[i][j];
		}
	}
	for(int w = 0; w < W; ++w){
		for(int h = 0; h < H; ++h){
			cout << matrix[h][w];
			if(h != H-1)
				cout << " ";
		}
		cout << endl;
	}
	

}





