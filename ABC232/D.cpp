#include<bits/stdc++.h>
using namespace std;
using pint = pair<int, int>;

vector<int> dx = {1, 0};
vector<int> dy = {0, 1};

int main(){
  int H, W; cin >> H >> W;
  vector<string> C(H);
  for(int i = 0; i < H; ++i) cin >> C[i];

  vector<vector<int>> cnt(H, vector<int>(W, -1)); 
  queue<pint> que;
  cnt[0][0] = 1;
  que.push(make_pair(0,0));

  while(!que.empty()){
    auto v = que.front(); 
    int x = v.first, y = v.second;
    que.pop();
    for(int i = 0; i < 2; ++i){
      int n_x = x + dx[i];
      int n_y = y + dy[i];
      if(n_x<0||n_x>=H||n_y<0||n_y>=W) continue;
      if(C[n_x][n_y]=='#') continue;
      if(cnt[n_x][n_y] != -1) continue;
      cnt[n_x][n_y] = cnt[x][y]+1;
      que.push(make_pair(n_x, n_y));
    }
  }
  int ans = 0; 
  for(int i = 0; i < H; ++i) for(int j = 0; j < W; ++j)
    ans = max(ans, cnt[i][j]);
  cout << ans << endl;
}


  



