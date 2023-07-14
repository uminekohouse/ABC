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
  vector<int> p(N);
  for(int i = 0; i < N; ++i) cin >> p[i];
  vector<int> rotate(N, 0);
  for(int i = 0; i < N; ++i){
    int num = (i-1-p[i])%N;
    if(num<0) num = (num+N)%N;
    rotate[num]++;
    rotate[(num+1)%N]++;
    rotate[(num+2)%N]++;
  }
  int ans = 0;
  for(auto r : rotate) ans = max(ans, r);
  cout << ans << endl;
}






