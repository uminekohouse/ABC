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
  int N, M; cin >> N >> M;
  vector<vector<bool>> path(N, vector<bool>(N, false));
  for(int i = 0; i < M; ++i){
    int U, V; cin >> U >> V;
    U--; V--; path[U][V] = true; path[V][U] = true;
  }
  int ans = 0;
  for(int i = 0; i < N-2; ++i){
    for(int j = i+1; j < N-1; ++j){
      for(int k = j+1; k < N; ++k){
        if(path[i][j]&&path[j][k]&&path[k][i]) ans++;
      }
    }
  }
  cout << ans << endl;
}    






