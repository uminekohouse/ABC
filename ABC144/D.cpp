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
	double a, b, x; cin >> a >> b >> x;
	double PI = acos(-1);
	double ans;
	x /= a;
	if(2*x<=a*b){
		a = 2*x/b;
	}
	else{
		x = a*b-x;
		b = 2*x/a;
	}
	double c = sqrt(a*a + b*b);
	ans = acos(a/c) * 180 / PI;
	printf("%.10f\n", ans);
}
