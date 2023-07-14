#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
  ll N, X; cin >> N >> X;
  vector<vector<ll>> balls(N, vector<ll>());
  for(int i = 0; i < N; ++i){
    int L; cin >> L;
    for(int j = 0; j < L; ++j){
      ll a; cin >> a; balls[i].push_back(a);
    }
  }
  map<ll, int> mp;
  mp[1] = 1;
  for(int i = 0; i < N; ++i){
    map<ll, int> mp2;
    for(auto p : mp){
      ll key = p.first;
      int val = p.second;
      for(auto q : balls[i]){
        if(key*q>X) continue;
        mp2[q*key] += val;
      }
    }
    swap(mp, mp2);
  }
  cout << mp[X] << endl;
}


  


