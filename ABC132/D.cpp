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

bool sort_func(pair<int, int> A, pair<int, int> B){
	int A_1 = A.first, A_2 = A.second;
	int B_1 = B.first, B_2 = B.second;
	if(A_2<B_2) return true;
	else if(B_2<A_2) return false;
	else if(A_2==B_2&&A_1<B_1) return true;
	else return false;
}

int main(){
	int N; cin >> N;
	vector<pair<int, int>> work;
	for(int i = 0; i < N; ++i){
		int A, B; cin >> A >> B;
		work.push_back(make_pair(A, B));
	}
	//お仕事並び替え
	sort(work.begin(), work.end(), sort_func);
	//お仕事の処理、ダメだったらflag = false;
	bool flag = true;
	int now = 0;
	for(auto p : work){
		now += p.first;
		if(now > p.second) flag = false;
	}
	if(flag) cout << "Yes" << endl;
	else cout << "No" << endl;
	
}


