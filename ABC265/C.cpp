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
  long long N, P, Q, R; cin >> N >> P >> Q >> R;
  vector<long long> A(N); for(int i = 0; i < N; ++i) cin >> A[i];
  vecto<long long> S(N+1, 0);
  S[0] = 0;
  for(int i = 1; i <= N; ++i) S[i] += S[i-1]+A[i-1];

  for(int x = 1; x <= N-3; ++x){
    for(int w = 4; w <= N; ++w){
      long long tmp = P+Q+R;
      if(tmp==S[w-1]-S[x-1]){


      


  
}






