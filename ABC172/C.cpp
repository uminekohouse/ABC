#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
  ll N, M, K; cin >> N >> M >> K;
  queue<ll> A, B;
  ll tmp;
  for(int i = 0; i < N; ++i) cin >> tmp, A.push(tmp);
  for(int i = 0; i < M; ++i) cin >> tmp, B.push(tmp);
  ll LINF = 1LL<<60;
  A.push(LINF); B.push(LINF);
  ll now = 0;
  ll cnt = 0;
  while(1){
    ll a = A.front(), b = B.front();
    if(a<b){
      if(now+a>K) break;
      now += a;
      A.pop();
      cnt++;
    }
    else{
      if(now+b>K) break;
      now += b;
      B.pop();
      cnt++;
    }
  }
  cout << cnt << endl;
 
}


  


