#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll mod = 998244353;
	
int main(){
  ll N, M, K; cin >> N >> M >> K;
  vector<ll> S(M+1, 0); for(int i = 1; i <= M; ++i) S[i] = S[i-1]+1;
  for(int i = 2; i <= N; ++i){
    vector<ll> newS(M+1, 0);
    for(int j = 1; j <= M; ++j){
      ll tmp = 0;
      if(K!=0){
        if(j+K<=M) tmp += (S[M]-S[j+K-1])%mod, tmp%=mod;
        if(j-K>=1) tmp += (S[j-K]-S[0])%mod, tmp%=mod;
      }
      else tmp +=(S[M]-S[0])%mod, tmp%=mod;
      newS[j] = (tmp+newS[j-1])%mod;
    }
    swap(S, newS);
  }
  cout << S[M] << endl;
}






