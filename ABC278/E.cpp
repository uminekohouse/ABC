#include<bits/stdc++.h>
using namespace std;

int main(){
  int H, W, N; cin >> H >> W >> N;
  int h, w; cin >> h >> w;
  vector<vector<int>> board(H+1, vector<int>(W+1, 0));
  for(int i = 1; i <= H; ++i) for(int j = 1; j <= W; ++j)
    cin >> board[i][j];
  vector<vector<int>> sum(H+1, vector<int>(W+1, 0));
  vector<vector<set<int>>> tmp(H+1, vector<set<int>>(W+1));
  for(int i = 1; i <= H; ++i){
    for(int j = 1; j <= W; ++j){
      tmp[i][j] = tmp[i][j-1];
      tmp[i][j].insert(board[i][j]);
    }
  }
  for(int i = 1; i <= H; ++i){
    for(int j = 1; j <= W; ++j){
      for(auto p : tmp[i-1][j]) tmp[i][j].insert(p);
    }
  }
  for(int i = 1; i <= H; ++i){
    for(int j = 1; j <= W; ++j) sum[i][j] = tmp[i][j].size();
  }
  vector<vector<int>> ans(H-h+1, vector<int>(W-w+1));
  for(int i = 0; i < H-h+1; ++i){
    for(int j = 0; j < W-w+1; ++j){

}
