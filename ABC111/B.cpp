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

bool func(int i){
	int A, B, C;
	C = i%10; i /= 10;
	B = i%10; i /= 10;
	A = i%10; 
	if(A==B&&B==C) return true;
	else  return false;
}

int main(){
	int N; cin >> N;
	for(int i = N; i <= 999; ++i){
	   bool flag = func(i);
	   if(flag){ 
		   cout << i << endl;
		   return 0;
	   }
	}
}
