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
#ifndef M_PI
#define M_PI 3.14159265358979
#endif
#define deg_to_rad(deg) (((deg)/360)*2*M_PI);
#define rad_to_deg(rad) (((rad)/2/M_PI)*360);

int main(){
  int N, K; cin >> N >> K;
  vector<vector<int>> oishisa(101, vector<int>());
  int max_oishisa = 0;
  for(int i = 0; i < N; ++i){
    int A; cin >> A;
    oishisa[A].push_back(i+1);
    chmax(max_oishisa, A);
  }
  set<int> B;
  for(int i = 0; i < K; ++i){
    int b; cin >> b;
    B.insert(b);
  }
  bool flag = false;
  for(auto p : oishisa[max_oishisa]){
    if(B.count(p)) flag = true;
  }
  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;

   
}
