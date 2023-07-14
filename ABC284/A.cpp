#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  vector<string> S(N);
  for(int i = 0; i < N; ++i) cin >> S[i];
  reverse(S.begin(), S.end());
  for(auto v : S) cout << v << endl;
}

