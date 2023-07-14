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
  vector<vector<int>> nums(N, vector<int>());
  for(int i = 0; i < N; ++i){
    int L; cin >> L;
    for(int j = 0; j < L; ++j){
      int num; cin >> num;
      nums[i].push_back(num);
    }
  }
  for(int i = 0; i < Q; ++i){
    int s, t; cin >> s >> t;
    cout << nums[s-1][t-1] << endl;
  }

}    






