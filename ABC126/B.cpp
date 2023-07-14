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
	string S; cin >> S;
	int A = 0;
	for(int i = 0; i < 2; ++i){
		A *= 10;
		A += S[i] - '0';
	}

	int B = 0;
	for(int i = 2; i < 4; ++i){
		B *= 10;
		B += S[i] - '0';
	}
	if((1<=A&&A<=12)&&(1<=B&&B<=12)) cout << "AMBIGUOUS" << endl;
	else if(1<=B&&B<=12) cout << "YYMM" << endl;
	else if(1<=A&&A<=12) cout << "MMYY" << endl;
	else cout << "NA" << endl;

}
