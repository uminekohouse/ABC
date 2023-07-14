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

int H, W, r, c;
int N, Q;


int main(){
  cin >> H >> W >> r >> c;
  cin >> N;
  map<int, vector<int>> row;
  map<int, vector<int>> col;
  for(int i = 1; i <= N; ++i){
    int p, q; cin >> p >> q;
    row[p].push_back(q);
    col[q].push_back(p);
  }
  for(auto iter = row.begin(); iter != row.end(); iter++){
    (iter->second).push_back(0);
    (iter->second).push_back(W+1);
    sort((iter->second).begin(), (iter->second).end());
  }
  for(auto iter = col.begin(); iter != col.end(); iter++){
    (iter->second).push_back(0);
    (iter->second).push_back(H+1);
    sort((iter->second).begin(), (iter->second).end());
  }
  cin >> Q;
  for(int i = 1; i <= Q; ++i){
    char d; int l; cin >> d >> l;
    if(d=='L'){
      if(row.count(r)){
        auto iter = lower_bound(row[r].begin(), row[r].end(), c);
        iter--;
        c = max(c-l, *iter+1);
      }
      else c = max(1, c-l);
    }
    if(d=='R'){
      if(row.count(r)){
        auto iter = lower_bound(row[r].begin(), row[r].end(), c);
        c = min(c+l, *iter-1);
      }
      else c = min(W, c+l);
    }
    if(d=='U'){
      if(col.count(c)){
        auto iter = lower_bound(col[c].begin(), col[c].end(), r);
        iter--;
        r = max(r-l, *iter+1);
      }
      else r = max(1, r-l);
    }
    if(d=='D'){
      if(col.count(c)){
        auto iter = lower_bound(col[c].begin(), col[c].end(), r);
        r = min(r+l, *iter-1);
      }
      else r = min(H, r+l);
    }
    cout << r << " " << c << endl;
  }
}
