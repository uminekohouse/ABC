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
  vector<long long> A(N); for(int i = 0; i < N; ++i) cin >> A[i];
  map<LL, vector<LL>> S;
  for(int i = 0; i < N; ++i){
    S[A[i]].push_back(i+1);
  }
  /*
  for(int i = 1; i <= N; ++i){
    if(S.count(i)){
      cout << "X" << i << endl;
      for(auto p : S[i]){
        cout << p << " ";
      }
    }
    cout << endl; 
  }
  */
  long long Q; cin >> Q;
  for(int q = 0; q < Q; ++q){
    long long L, R, X; cin >> L >> R >> X;
    if(!S.count(X)) cout << 0 << endl;
    else{
      auto iter_l = lower_bound(S[X].begin(), S[X].end(), L-1);
      auto iter_r = lower_bound(S[X].begin(), S[X].end(), R);
      cout << iter_r - iter_l << endl;
    }
  }
  return 0;
  
}






