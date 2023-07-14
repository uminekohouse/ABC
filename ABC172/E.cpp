#include<bits/stdc++.h>
using namespace std;

int main(){
  long long X; cin >> X;
  long long ans = 0;
  while(X){
    string S = to_string(X);
    cout << S << endl;
    S.pop_back();
    cout << S << endl;
    long long tmp = stoll(S);
    X = tmp;
    ans += X;
  }
  cout << ans << endl;
}





