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
  LL N; cin >> N;;
  long long S = cbrt(N/2);
  vector<bool> isprime(S+1, true);
  isprime[0] = false;
  isprime[1] = false;
  for(int p = 2; p <= S; ++p){
    if(!isprime[p]) continue;
    for(int q = p*2; q <= S; q += p){
     isprime[q] = false;
    }
  } 
  vector<long long> prime;
  for(int i = 0; i <= S; ++i){
    if(isprime[i]) prime.push_back(i);
  }

  long long ans = 0;
  int M = prime.size();
  LL tmp;
  for(int i = M-1; i > 0; --i){
    for(int j = i-1; j >= 0; --j){
      long long p = prime[j];
      long long q = prime[i];
      tmp = N/(q*q*q);
      if(p <= tmp){
        ans += j+1;
        break;
      }
    }
  }
  cout << ans << endl;
}

