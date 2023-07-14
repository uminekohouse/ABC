#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  vector<int> P(N);
  for(int i = 0; i < N; ++i) cin >> P[i];
  prev_permutation(P.begin(), P.end());
  for(auto p : P) cout << p << endl;
}

