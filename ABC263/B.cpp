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
  int N; cin >> N;
  vector<int> p(N, 0);
  for(int i = 1; i < N; ++i) cin >> p[i];
  for(int i = 1; i < N; ++i) p[i]--;

  int cnt = 1;
  int k = N-1;
  while(p[k]!=0){
    cnt++;
    k = p[k];
  }
  cout << cnt << endl;
  
}    






