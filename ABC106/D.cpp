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
  int N, M, Q; cin >> N >> M >> Q;
  vector<vector<int>> LR(N, vector<int>(N, 0));
  for(int i = 0; i < M; ++i){
    int L, R; cin >> L >> R; L--; R--;
    LR[L][R]++;
  }

  vector<vector<int>> sum(N+1, vector<int>(N+1));
  for(int i = 1; i <= N; ++i){
    for(int j = 1; j <= N; ++j){
      sum[i][j] += sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1] + LR[i-1][j-1];
    }
  }
  for(int i = 0; i < N+1; ++i){
    for(int j = 0; j < N+1; ++j){
      cout << sum[i][j] << ' ';
    }
    cout << endl;
  }
  for(int q = 0; q < Q; ++q){
    int l, r; cin >> l >> r; l--; r--;
    cout << sum[r][r] - sum[l][r] - sum[r][l] + sum[l][l] << endl;
  }


}

