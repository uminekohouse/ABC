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
  int N, M;
  cin >> N >> M;
  vector<int> A(N); for(int i = 0; i < N; ++i) cin >> A[i];
  map<int, int> m;
  for(auto p : A) m[p]++;
  vector<pair<int, int>> val_cnt;

