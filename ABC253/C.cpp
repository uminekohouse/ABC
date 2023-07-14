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
  int Q; cin >> Q; 
  map<int, int> A;
  for(int i = 0; i < Q; ++i){
    int q; cin >> q;
    if(q==1){
      int x; cin >> x;
      A[x]++;
    }
    else if(q==2){
      int x, c; cin >> x >> c;
      if(A[x] > c) A[x] -= c;
      else A.erase(x);
    }
    else if(q==3){
      int minkey = A.begin()->first;
      int maxkey = A.rbegin()->first;
      int res = A[maxkey] - A[minkey];
      cout << maxkey - minkey << endl;
    }
  }
}


