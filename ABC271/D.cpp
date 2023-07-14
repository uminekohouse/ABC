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
  int N, S; cin >> N >> S;
  vector<int> a(N), b(N);
  for(int i = 0; i < N; ++i) cin >> a[i] >> b[i];

  vector<vector<string>> dp(N+1, vector<string>(10100, ""));
  dp[0][a[0]] = "H";
  dp[0][b[0]] = "T";
  for(int i = 1; i < N; ++i){
   for(int j = 0; j < 10100; ++j){
    if(dp[i-1][j]!=""){
     if(dp[i][j+a[i]]=="") dp[i][j+a[i]] = dp[i-1][j] + "H";  
     if(dp[i][j+b[i]]=="") dp[i][j+b[i]] = dp[i-1][j] + "T";  
    }
   }
  }
  if(dp[N-1][S]=="") cout << "No" << endl;
  else cout << "Yes" << endl << dp[N-1][S] << endl;
}
