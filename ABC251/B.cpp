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
  int N, W; cin >> N >> W;
  vector<int> A(N); for(int i = 0; i < N; ++i) cin >> A[i];

  set<int> S;
  for(int i = 0; i < N-2; ++i){
    for(int j = i+1; j < N-1; ++j){
      for(int k = j+1; k < N; ++k){
        int tmp = A[i]+A[j]+A[k];
        if(tmp <= W) S.insert(tmp);
      }
    }
  }
  for(int i = 0; i < N-1; ++i){
    for(int j = i+1; j < N; ++j){
      int tmp = A[i] + A[j];
      if(tmp <= W) S.insert(tmp);
    }
  }
  for(int i = 0; i < N; ++i){
    int tmp = A[i];
    if(tmp <= W) S.insert(tmp);
  }
  cout << S.size() << endl;

}
