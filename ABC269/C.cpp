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
  long long N; cin >> N;
  vector<int> b;
  for(int i = 0; 1LL<<i <= N; ++i)
    if(N&1LL<<i) b.push_back(i);
  set<long long> s;
  for(int bit = 0; bit < 1<<b.size(); ++bit){
    long long res = 0;
    for(int i = 0; i < b.size(); ++i)
      if(bit&1<<i) res = res|1LL<<b[i];
    s.insert(res);
  }
  for(auto p : s) cout << p << endl;
}
