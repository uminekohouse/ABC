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
  set<int> S;
  for(int i = 0; i < N; ++i){
    int n; cin >> n;
    S.insert(n);
  }
  int ans = 0;
  while(1){
    if(S.count(ans)) ans++;
    else{
      cout << ans << endl;
      break;
    }
  }

}






