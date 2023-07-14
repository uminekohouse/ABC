#include<bits/stdc++.h>
using namespace std;


int main(){
  vector<int> dx = {-1, 0, +1, 0};
  vector<int> dy = {0, +1, 0, -1};
  int H, W; cin >> H >> W;
  vector<string> board(H);for(int i = 0; i < H; ++i) cin >> board[i];
  int s_x, s_y;
  for(int i = 0; i < H; ++i){
    for(int j =0; j < W; ++j){
      if(board[i][j]=='S') s_x = i, s_y = j;
    }
  }
  vector<pair<int, int>> points;
  for(int i = 0; i < 4; ++i){
    int x = s_x + dx[i], y = s_y + dy[i];
    if(x<0||y<0||x>=H||y>=W) continue;
    if(board[x][y]=='#') continue;
    points.push_back(make_pair(x, y));
  }
  if(points.size()<=1){
    cout << "No" << endl;
    return 0;
  }
  board[s_x][s_y] = '#';
  vector<vector<bool>> check;
  function<void(int, int)> DFS = [&](int x, int y){
    check[x][y] = true;
    for(int i = 0; i < 4; ++i){
      int nx = x + dx[i], ny = y + dy[i];
      if(nx<0||ny<0||nx>=H||ny>=W) continue;
      if(board[nx][ny] == '#') continue;
      if(check[nx][ny]) continue;
      DFS(nx, ny);
    }
  };

  bool ok = false;
  for(int i = 0; i < points.size()-1; ++i){
   for(int j = i+1; j < points.size(); ++j){
     check.assign(H, vector<bool>(W, false));
     DFS(points[i].first, points[i].second);
     if(check[points[j].first][points[j].second]) ok = true;
   }
  }
  if(ok) cout << "Yes" << endl;
  else cout << "No" << endl;
}


