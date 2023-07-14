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
  vector<int> A(N), B(N); for(int i = 0; i < N; ++i) cin >> A[i];
  for(int i = 0; i < N; ++i) B[i] = A[i];
  sort(B.begin(), B.end());
  B.erase(unique(B.begin(), B.end()), B.end());
  reverse(B.begin(), B.end());
  map<int, int> C;
  for(int i = 0; i < N; ++i) C[A[i]]++;

  int cnt = B.size();
  for(int i = 0; i < B.size();  ++i){
    cout << C[B[i]] << endl;
  }
  for(int i = 0; i < N-B.size(); ++i) cout << 0 << endl;
}
