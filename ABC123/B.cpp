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
	vector<int> time(5);
	for(int i = 0; i < 5; ++i) cin >> time[i];
	sort(time.begin(), time.end());
	int ans = 123*9;
	do{
		int tmp = 0;
		for(int i = 0; i < 5; ++i){
			tmp += time[i];
			if(tmp%10!=0&&i!=4){
				tmp += 10 - tmp%10;
			}
		}
		ans = min(ans, tmp);
	}while(next_permutation(time.begin(), time.end()));

	cout << ans << endl;
}
