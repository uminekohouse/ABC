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
	for(int i = 1; i < 33; ++i){
		for(int j = 1; j < 33; ++j){
			if(pow(i,5)-pow(j,5)==33){
				cout << i << " " << j << endl;
			}
		}
	}
	cout << "だめでした" << endl;
}



