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


bool check(LL tmp, LL A, LL B, LL X){
	string S = to_string(tmp);
	LL money = A * tmp + B * (int)S.size();
	if(money <= X) return true;
	else return false;
}


int main(){
	LL A, B, X; cin >> A >> B >> X;
	LL m = 0, M = min(X/A, (LL)1000000001);
	while(M-m>1){
		LL tmp = (m + M) / 2;
		if(check(tmp, A, B, X)) m = tmp;
		else M = tmp;
	}
	cout << m << endl;
}



