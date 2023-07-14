#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, K; cin >> N >> K;
  string S[101]; for(int i = 1; i <= N; ++i) cin >> S[i];
  sort(S+1, S+K+1);
  for(int i = 1; i <= K; ++i) cout << S[i] << endl;
}




