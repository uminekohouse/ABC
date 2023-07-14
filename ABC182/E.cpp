#include<bits/stdc++.h>
using namespace std;

int main(){
  int H, W; cin >> H >> W;
  int N, M; cin >> N >> M;
  vector<int> A(N), B(N);
  for(int i = 0; i < N; ++i){
    cin >> A[i] >> B[i];
    A[i]--; B[i]--;
  }
  vector<vector<int>> row(H, vector<int>());
  vector<vector<int>> col(W, vector<int>());
  for(int i = 0; i < H; ++i){
    row[i].push_back(-1);
    row[i].push_back(W);
  }
  for(int i = 0; i < W; ++i){
    col[i].push_back(-1);
    col[i].push_back(H);
  }
  for(int i = 0; i < M; ++i){
    int C, D; cin >> C >> D;
    C--; D--;
    row[C].push_back(D);
    col[D].push_back(C);
  }
  for(int i = 0; i < H; ++i) sort(row[i].begin(), row[i].end());
  for(int i = 0; i < W; ++i) sort(col[i].begin(), col[i].end());

  vector<vector<bool>> cnt(H, vector<bool>(W, false));
  for(int i = 0; i < N; ++i){
    int a = A[i], b = B[i];
    auto tmp = lower_bound(row[a].begin(), row[a].end(), b);
    int row_right = *tmp-1;
    tmp--;
    int row_left = *tmp+1;
    tmp = lower_bound(col[b].begin(), col[b].end(), a);
    int col_down = *tmp-1;
    tmp--;
    int col_front = *tmp+1;
    for(int i = row_left; i <= row_right; ++i) cnt[a][i] = true;
    for(int i = col_front; i <= col_down; ++i) cnt[i][b] = true;
  }
  int ans = 0;
  for(int i = 0; i < H; ++i) for(int j = 0; j < W; ++j)
    if(cnt[i][j]) ans++;
  cout << ans << endl;
}




