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
	int year = 0, month = 0, day = 0;
	for(int i = 0; i < 4; ++i){
		year *= 10;
		year += S[i] - '0';
	}
	for(int i = 5; i < 7; ++i){
		month *= 10;
		month += S[i] - '0';
	}
	for(int i = 8; i < 10; ++i){
		day *= 10;
		day += S[i] - '0';
	}

	bool flag = true;
	if(year > 2019) cout << "TBD" << endl;
	else if(year == 2019 && month > 4) cout << "TBD" << endl;
	else if(year == 2019 && month == 4 && day > 30) cout << "TBD" << endl;
	else cout << "Heisei" << endl;
}


