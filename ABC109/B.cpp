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
	vector<string> words(N);
	set<string> S;
	bool flag = true;
	for(int i = 0; i < N; ++i){
		string tmp; cin >> tmp;
		if(S.count(tmp)) flag = false;
		if(i!=0){
			string mae = words[i-1];
			if(mae[mae.size()-1] != tmp[0]) flag = false;
		}
		S.insert(tmp);
		words[i] = tmp;
	}
	if(flag) cout << "Yes" << endl;
	else cout  << "No" << endl;

}
