#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll N; cin >> N;
  ll ans = 0;
  while(N){
    ans += N/10;
    N /= 10;
  }
  cout << ans << endl;
  
}
