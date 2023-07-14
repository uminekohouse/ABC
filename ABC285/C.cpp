#include<bits/stdc++.h>
using namespace std;
using ll = long long;



int main(){
  string S; cin >> S;
  ll ans = 0;
  reverse(S.begin(), S.end());
  for(int i = 0; i < S.size(); ++i){
    ll tmp = S[i]-'A'+1;
    ans += tmp*pow(26,i);
  }
  cout << ans << endl;
}




