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
  vector<int> x(N);
  vector<int> y(N);
  for(int i = 0; i < N; ++i) cin >> x[i] >> y[i];
  int tmp_ans = 0;
  for(int i = 0; i < N-1; ++i){
    for(int j = i+1; j < N; ++j){
      int dx = x[i] - x[j];
      int dy = y[i] - y[j];
      tmp_ans = max(tmp_ans, dx*dx+dy*dy);
    }
  }
  double ans = sqrt(tmp_ans);
  printf("%.10f\n", ans);
}





