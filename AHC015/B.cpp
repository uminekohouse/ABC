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

int N = 100;
vector<int> f(101);
vector<vector<int>> field(11, vector<int> (11, 0));
vector<vector<int>> seen;

const vector<int> dx = {0, +1, 0, -1};
const vector<int> dy = {+1, 0, -1, 0};

void tilt(char C){
  if(C=='L'){
    for(int i = 1; i <= 10; ++i){
      int now = 1;
      for(int j = 1; j <= 10; ++j){
        //空いているマスだったら無視
        if(field[i][j]==0) continue;
        //何か入っていれば詰める
        swap(field[i][now], field[i][j]);
        now++;
      }
    }
  }
  if(C=='R'){
    for(int i = 1; i <= 10; ++i){
      int now = 10;
      for(int j = 10; j >= 1; --j){
        //空いているマスだったら無視
        if(field[i][j]==0) continue;
        //何か入っていれば詰める
        swap(field[i][now],field[i][j]);
        now--;
      }
    }
  }
  if(C=='F'){
    for(int i = 1; i <= 10; ++i){
      int now = 1;
      for(int j = 1; j <= 10; ++j){
        //空いているマスだったら無視
        if(field[j][i]==0) continue;
        //何か入っていれば詰める
        swap(field[now][i], field[j][i]);
        now++;
      }
    }
  }
  if(C=='B'){
    for(int i = 1; i <= 10; ++i){
      int now = 10;
      for(int j = 10; j >= 1; --j){
        //空いているマスだったら無視
        if(field[j][i]==0) continue;
        //何か入っていれば詰める
        swap(field[now][i], field[j][i]);
        now--;
      }
    }
  }
}

void put_candy(int p, int time){
  int cnt = 0;
  for(int i = 1; i <= 10; ++i){
   for(int j = 1; j <= 10; ++j){
    if(field[i][j]==0) cnt++;
    if(cnt==p){
      field[i][j] = f[time];
      break;
    }
   }
  }
}

int DFS(int x, int y, int candy){
  seen[x][y] = 0;
  int cnt = 0;
  for(int i = 0; i < 4; ++i){
   int nx = x + dx[i], ny = y + dy[i];
   if(nx<1||nx>10||ny<1||ny>10) continue;
   if(seen[nx][ny] != candy) continue;
   cnt += DFS(nx, ny, candy);
  }
  return cnt += 1;
}

long long  GetScore(int time){
  seen = field;
  vector<int> candy_type(4, 0);
  for(int i = 1; i <= time; ++i) candy_type[f[i]]++;
  vector<int> link_candy; 
  for(int i = 1; i <= 10; ++i){
    for(int j = 1; j <= 10; ++j){
      if(seen[i][j]==0) continue;
      link_candy.push_back(DFS(i, j, field[i][j]));
    }
  }
  long long res = 0;
  /*
  for(auto p : link_candy) cout << p << " ";
  cout << endl;
  */
  for(auto p : link_candy) res += p*p;
  long long tmp = 0;
  for(auto p : candy_type) tmp += p*p;
  res = round(pow(10, 6) / tmp * res);
  return res;
}


int main(){
  for(int i = 1; i <= N; ++i) cin >> f[i];
  vector<char> res(101);
  vector<char> direct = {'L', 'B', 'R', 'F'};
  int p;
  for(int i = 1; i <= N; ++i){
    cin >> p;
    put_candy(p, i);
    /*
    for(int i = 1; i <= 10; ++i){
      for(int j = 1; j <= 10; ++j){
        cout << field[i][j];
      }
      cout << endl;
    }
    */
    long long now_score = 0;
    vector<vector<int>> now_field = field;
    for(auto c : direct){
      field = now_field;
      tilt(c);
      if(now_score < GetScore(i)){
        res[i] = c; 
        now_score = GetScore(i);
      }
    }
    field = now_field;
    tilt(res[i]);
    cout << res[i] << endl;
    //cout << GetScore(i) << endl;
  }
}

