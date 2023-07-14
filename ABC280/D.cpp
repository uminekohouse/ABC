#include<bits/stdc++.h>
using namespace std;
using ll = long long;

vector<pair<long long, long long> > prime_factorize(long long N) {
    vector<pair<long long, long long> > res;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0; // 指数
        while (N % a == 0) {
            ++ex;
            N /= a;
        }
        res.push_back({a, ex});
    }
    if (N != 1) res.push_back({N, 1});
    return res;
}


int main(){
  ll N; cin >> N;

  vector<pair<ll, ll>> p;
  p = prime_factorize(N);
  if(p.size()==1) cout << p[0].first << endl;
  else if(p[p.size()-1].first>13) cout << p[p.size()-1].first << endl;
  else{
    ll tmp = 1;
    for(int i = 1; i <= 15; ++i){
      tmp *= i;
      if(tmp%N==0){
        cout << i << endl;
        return 0;
      }
    }
  }
} 

