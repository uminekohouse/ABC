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

int N, M;
typedef pair<int, int> pint;

vector<pint> A;
bool cmp(pint a, pint b){return a.second < b.second;}

int main(){
  cin >> N >> M;
  A.resize(M);
  for(int i = 0; i < M; ++i) cin >> A[i].first >> A[i].second;
  sort(A.begin(), A.end(), cmp);
  int res = 0;
  int endtime = 0;
  for(int i = 0; i < M; ++i){
    if(A[i].first >= endtime){
      endtime = A[i].second;
      ++res;
    }
  }
  cout << res << endl;
}
