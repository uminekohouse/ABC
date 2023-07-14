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
	int N, M; cin >> N >> M;
	vector<long long> x(N), y(N), z(N);
	for(int i = 0; i < N; ++i){
		cin >> x[i] >> y[i] >> z[i];
	}

	LL ans = 0;
	vector<vector<LL>> tmp(8, vector<LL>(3, 0));
	tmp[0][0] = +1; tmp[0][1] = +1; tmp[0][2] = +1;
	tmp[1][0] = +1; tmp[1][1] = +1; tmp[1][2] = -1;
	tmp[2][0] = +1; tmp[2][1] = -1; tmp[2][2] = +1;
	tmp[3][0] = -1; tmp[3][1] = +1; tmp[3][2] = +1;
	tmp[4][0] = +1; tmp[4][1] = -1; tmp[4][2] = -1;
	tmp[5][0] = -1; tmp[5][1] = +1; tmp[5][2] = -1;
	tmp[6][0] = -1; tmp[6][1] = -1; tmp[6][2] = +1;
	tmp[7][0] = -1; tmp[7][1] = -1; tmp[7][2] = -1;

	for(int k = 0; k < 8; ++k){
		vector<LL> tmp_value(N, 0);
		for(int i = 0; i < N; ++i){
			tmp_value[i] = x[i]*tmp[k][0] + y[i]*tmp[k][1] + z[i]*tmp[k][2];
		}
		sort(tmp_value.rbegin(), tmp_value.rend());
		LL tmp_ans = 0;
		for(int j = 0; j < M; ++j) tmp_ans += tmp_value[j];
		ans = max(ans, tmp_ans);
	}
	cout << ans << endl;

}




