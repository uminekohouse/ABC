#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, K; cin >> N >> K;
  vector<int> A(200, 0); for(int i = 1; i <= N; ++i) cin >> A[i];
  for(int i = K+1; i <= N+K; ++i) cout << A[i] << endl;
}

