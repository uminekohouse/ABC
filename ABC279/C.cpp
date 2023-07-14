#include<bits/stdc++.h>
using namespace std;

int main(){
  int H, W; cin >> H >> W;
  vector<string> f(H);
  vector<string> g(H);
  for(int i = 0; i < H; ++i) cin >> f[i];
  for(int i = 0; i < H; ++i) cin >> g[i];
  map<string, int> mp;
  for(int w = 0; w < W; ++w){
    string tmp;
    for(int h = 0; h < H; ++h){
      tmp += f[h][w];
    }
    mp[tmp] += 1;
  }
  for(int w = 0; w < W; ++w){
    string tmp;
    for(int h = 0; h < H; ++h){
      tmp += g[h][w];
    }
    mp[tmp] -= 1;
  }
  for(auto p : mp){
    string key = p.first;
    int val = p.second;
    if(val!=0){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;

}




