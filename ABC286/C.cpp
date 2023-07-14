#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll N, A, B;


int main(){
  cin >> N >> A >> B;
  string S; cin >> S;
  long long ans  = 1LL<<60;
  for(int i = 0; i <= N; ++i){
    ll tmp = A*i;
    for(int j = 0; j < N/2; ++j){
      if(S[i+j]!=S[(N-1-j+i)%N]) tmp += B;
    }
    if(ans>tmp){
     // cout << i << endl;
      ans = tmp;
    }
  }
  cout << ans  << endl;




}




