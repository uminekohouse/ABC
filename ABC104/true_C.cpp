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

int D;
long long G;
vector<long long> p, c;

int main(){
  cin >> D >> G;
  p.resize(D); c.resize(D);
  for(int i = 0; i < D; ++i) cin >> p[i] >> c[i];

  long long res = 1<<29;
  for(int bit = 0; bit < (1<<D); ++bit){
    long long sum = 0;
    long long num = 0;
    for(int i = 0; i < D; ++i){
      if(bit &(1<<i)) sum += c[i] + p[i] * 100 * (i+1), num += p[i];
    }
    if(sum >= G) res = min(res, sum);
    else{
      for(int i = D-1; i >= 0; --i){
        if(bit & (1<<i)) continue;
        else{
          for(int j = 0; j < p[i]; ++j){
            if(sum >= G) break;
            sum += 100 * (i+1);
            ++num;
          }
        }
      }
    }
    res = min(res, num);
  }
  cout << res << endl;
}


