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
#ifndef M_PI
#define M_PI 3.14159265358979
#endif
#define deg_to_rad(deg) (((deg)/360)*2*M_PI);
#define rad_to_deg(rad) (((rad)/2/M_PI)*360);

int main(){
  int N, K, Q;
  cin >> N >> K >> Q;
  vector<int> A(K); for(int i = 0; i < K; ++i) cin >> A[i];
  vector<int> L(Q); for(int i = 0; i < Q; ++i) cin >> L[i];
  for(auto l : L){
    l--;
    if(A[l]+1==A[l+1]) continue;
    else A[l] = min(A[l]+1, N);
  }
  for(int i = 0; i < K; ++i){
    if(i!=K-1) cout << A[i] << " ";
    else cout << A[i] << endl;
  }
}
