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
  int N, Q; cin >> N >> Q;
  string S; cin >> S;
  vector<int> vec(N); for(int i = 0; i < N; ++i) vec[i] = i;
  LL tmp = 0;
  for(int q = 0; q < Q; ++q){
    LL t, x; cin >> t >> x;
    if(t==1) tmp += (N-1)*x;
    if(t==2) cout << S[(vec[x-1]+tmp)%N] << endl;
  }
}



