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

int N, x, y, A[1009];

bool func(int x, vector<int> vec){
  unordered_set<int> p;
  p.insert(0);
  for(auto v : vec){
    unordered_set<int> q;
    swap(p, q);
    for(auto i : q){
      p.insert(i+v);
      p.insert(i-v);
    }
  }
  return p.count(x);
}
    

int main(){
  cin >> N >> x >> y;
  for(int i = 1; i <= N; ++i) cin >> A[i];
  vector<int> dx, dy;
  for(int i = 2; i <= N; ++i){
    if(i%2==0) dy.push_back(A[i]);
    else dx.push_back(A[i]);
  }
  x -= A[1];
  if(func(x, dx) && func(y, dy)) cout << "Yes" << endl;
  else cout << "No" << endl;
}



  

