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
  int H, W; cin >> H >> W;
  vector<vector<int>> A(H, vector<int>(W));
  for(int i = 0; i < H; ++i) for(int j = 0; j < W; ++j) cin >> A[i][j];
  
  vector<tuple<int, int, int, int>> op;
  
  for(int i = 0; i < H-1; ++i){
    for(int j = 0; j < W; ++j){
      if(A[i][j]%2==1){
          A[i+1][j] += 1; A[i][j] -= 1;
          //捜査の記録
          op.push_back(make_tuple(i+1, j+1, i+2, j+1));
      }
    }
  } 

  for(int i = 0; i < H; ++i){
    for(int j = 0; j < W-1; ++j){
      if(A[i][j]%2==1){
          A[i][j+1] += 1; A[i][j] -= 1;
          //捜査の記録
          op.push_back(make_tuple(i+1, j+1, i+1, j+2));
      }
    }
  } 
  
  cout << op.size() << endl;
  for(auto tu : op){
    int a, b, c, d;
    tie(a, b, c, d) = tu;
    cout << a << " " << b << " " << c << " " << d << endl;
  }

  
  


}



