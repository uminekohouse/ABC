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
	LL N; cin >> N;
	string S; cin >> S;
	LL R = 0, G = 0, B = 0;
    for(auto c : S){
		if(c == 'R') R++;	
		if(c == 'G') G++;	
		if(c == 'B') B++;	
	}
	long long sum = R*G*B;
	long long ans = sum;
	for(LL i = 0; i < N-2; ++i){
		for(LL j = i+1; j < N-1; ++j){
		   LL k = i + (j-i)*2;
		   if(k >= N) continue;
	   	   if(S[i]!=S[j]&&S[j]!=S[k]&&S[k]!=S[i]){
			  ans--;	   
		   }
		}
	}
	cout << ans << endl;

}




