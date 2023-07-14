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
  vector<long long> A(5); for(int i = 0; i < 5; ++i) cin >> A[i];
  long long m = LINF;
  long long min_id = LINF;
  for(int i = 0; i < 5; ++i){
    if(m > A[i]) m = A[i], min_id = i;
  }
  long long ans;
  if(m >= N) ans = 5;
  else{
    ans = (N+m-1)/m;
    ans += 4;
  }
  cout << ans << endl;
}
