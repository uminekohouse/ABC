#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, M, K;
  cin >> N >> M >> K;
  vector<vector<vector<pair<int, int>>>>
  G(N, vector<vector<pair<int, int>>>(2, vector<pair<int, int>>()));
  for(int i = 0; i < M; ++i){
    int u, v, a; cin >> u >> v >> a;
    u--; v--;
    G[u][a].push_back(make_pair(v, a));
    G[v][a].push_back(make_pair(u, a));
  }
  vector<bool> switches(N, false);
  for(int i = 0; i < K; ++i){
    int s; cin >> s; --s;
    switches[s] = true;
  }
  vector<vector<bool>> used(N, vector<bool>(2, false));
  vector<vector<int>> cur(N, vector<int>(2, 1<<30));
  priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> Q;

  cur[0][1] = 0;
  Q.push(make_tuple(cur[0][1], 0, 1));
  while(!Q.empty()){
    int dist, v, state;
    tie(dist, v, state) = Q.top();
    Q.pop();
    if(used[v][state]) continue;
    used[v][state] = true;

    for(auto p : G[v][state]){
      int nv = p.first;
      int state = p.second;
      if(cur[nv][state] > cur[v][state]+1){
        cur[nv][state] = cur[v][state]+1;
        Q.push(make_tuple(cur[nv][state], nv, state));
      }
    }
    if(switches[v]){
        Q.push(make_tuple(cur[v][(state+1)%2], v, (state+1)%2));
    }
  }
  cout << cur[N-1][0] << endl;
  cout << cur[N-1][1] << endl;
}






