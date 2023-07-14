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
  int X, Y, N; cin >> X >> Y >> N;
  int ans = 0;
  if(3*X>Y){
    ans += (N%3)*X;
    ans += (N-N%3)/3*Y;
  }
  else ans += N*X;
  cout << ans << endl;

}

