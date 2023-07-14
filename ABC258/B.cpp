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

vector<int> dx = {1, 1, 1, 0, -1, -1, -1, 0};
vector<int> dy = {1, 0, -1, -1, -1, 0, 1, 1};


int main(){
  int N; cin >> N;
  vector<string> S(N);
  for(int i = 0; i < N; ++i) cin >> S[i];
  vector<vector<int>> A(N, vector<int>(N));
  for(int i = 0; i < N; ++i){
    for(int j = 0; j < N; ++j){
      A[i][j] = (int)(S[i][j]-'0');
    }
  }

  long long ans = 0;
  for(int i = 0; i < N; ++i){
    for(int j = 0; j < N; ++j){
      for(int k = 0; k < 8; ++k){
        int now_x = i, now_y = j;
        long long tmp = A[now_x][now_y];
        for(int l = 1; l < N; ++l){
          tmp *= 10;
          now_x = (now_x+dx[k]+N)%N;
          now_y = (now_y+dy[k]+N)%N;
          tmp += A[now_x][now_y];
        }
        chmax(ans, tmp);
      }
    }
  }
  cout << ans << endl;
}
