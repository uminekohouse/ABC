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

int N, H[109];

int main(){
  cin >> N;
  for(int i = 1; i <= N; ++i) cin >> H[i];
  int high = 0, res = 0;
  for(int i = 1; i <= N; ++i){
    if(high<H[i]){
      high = H[i];
      res = i;
    }
  }
  cout << res << endl;
}

