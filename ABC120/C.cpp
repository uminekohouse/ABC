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
	stack<char> st;
	int ans = 0;
	for(auto c : S){
		if(st.empty()||st.top()==c) st.push(c);
		else{
			ans += 2;
			st.pop();
		}
	}
	cout << ans << endl;
}
