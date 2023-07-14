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
  vector<int> A(K);
  for(int i = 0; i < K; ++i){
    cin >> A[i];
    A[i]--;
  }
  vector<int> X(N), Y(N);
  for(int i = 0; i < N; ++i){
    cin >> X[i] >> Y[i];
  }
  double ans = 0;
  for(int i = 0; i < N; ++i){
    int tmp = 0;
    double l = 100000000;
    for(int j = 0; j < K; ++j){
      double dx = X[i] - X[A[j]]; 
      double dy = Y[i] - Y[A[j]]; 
      if(l>sqrt(dx*dx+dy*dy)){
        l = sqrt(dx*dx+dy*dy);
        tmp = j;
      }
    }
    double x = X[i] - X[A[tmp]];
    double y = Y[i] - Y[A[tmp]];
    double tmp_ans = sqrt(x*x+y*y);
    ans = max(ans, tmp_ans);
  }
  printf("%.10f\n", ans);
}

