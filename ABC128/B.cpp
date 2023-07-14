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

bool tmp(pair<string, int> A, pair<string, int> B){
	string A_1 = A.first, B_1 = B.first;
	int A_2 = A.second, B_2 = B.second;
	if(A_1 < B_1) return true;
	else if(B_1 < A_1) return false;
	else if(A_1==B_1&&A_2>B_2) return true;
	else return false;
}

int main(){
	int N; cin >> N;
	vector<pair<string, int>> tensuu(N), narabikae(N);
	for(int i = 0; i < N; ++i){
		string S; int P; cin >> S >> P;
		tensuu[i] = make_pair(S, P);
		narabikae[i] = make_pair(S, P);
	}
	sort(narabikae.begin(), narabikae.end(), tmp);

	for(auto v : narabikae){
		for(int i = 0; i < N; ++i){
			if(v == tensuu[i]){
				cout << i+1 << endl;
				break;
			}
		}
	}



}
