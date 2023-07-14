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
  long long N, K; cin >> N >> K;
  vector<long long> mod(K, 0);
  for(int i = 1; i <= N; ++i) mod[i%K]++;
  long long ans = pow(mod[0], 3);
  if(K%2==0) ans += pow(mod[K/2], 3);
  cout << ans << endl;
}
