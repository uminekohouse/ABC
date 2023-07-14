#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; string S; cin >> N >> S;
  for(int i = 1; i <= N-1; ++i){
    int ans = 0;
    for(int j = 0; j + i < N; ++j){
      if(S[j]==S[i+j]) break;
      else ans++;
    }
    cout << ans << endl;
  }
}




