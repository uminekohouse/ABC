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
	vector<int> h(N); 
	for(int i = 0; i < N; ++i) cin >> h[i];

	int ans = 0;

	while(true){
		if(*max_element(h.begin(), h.end()) == 0) break;
		int i = 0;	
		while(i < N){
			if(h[i] == 0) i++;
			else{
				ans++;
				while(i<N&&h[i]>0){
					h[i]--;
					i++;
				}
			}
		}
	}
	cout << ans << endl;
}


