#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll X, A, D, N;
  cin >> X >> A >> D >> N;
  if(D == 0){
    cout << abs(A-X) << endl;
    return 0;
  }
  if(D < 0){
    A = A+D*(N-1);
    D = -D;
  }
  ll i = (X-A)/D;
  auto f = [&](ll i){
    if(i < 0) i = 0;
    if(i >= N) i = N-1;
    return A+D*i;
  };
  ll ans = abs(f(i)-X);
  ans = min(ans, abs(f(i+1)-X));
  cout << ans << endl;
}


