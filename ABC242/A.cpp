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
  double A, B, C, X;
  cin >> A >> B >> C >> X;
  double ans;
  if(X <= A) ans = 1.0;
  else if (X <= B) ans = C/(B-A);
  else ans = 0;
  printf("%.10f\n", ans);
}




