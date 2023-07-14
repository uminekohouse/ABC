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


int N;
vector<int> A;
set<int> s;
deque<int> deq;

int main(){
  cin >> N;
  A.assign(N, 0);
  for(int i = 0; i < N; ++i) cin >> A[i];
  sort(A.rbegin(), A.rend());
  for(int i = 0; i < N; ++i){
    if(!s.count(A[i])){
      s.insert(A[i]);
      deq.push_front(A[i]);
    }
    else deq.push_back(A[i]);
  }
  int ans = 0;
  while(!deq.empty()){
    if(ans+1 == deq.front()) ans++, deq.pop_front();
    else if(deq.size() >= 2){
      deq.pop_back(); deq.pop_back();
      ans++;
    }
    else break;
  }
  cout << ans << endl;
}
