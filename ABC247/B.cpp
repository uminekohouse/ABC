#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  vector<string> S(N), T(N);
  for(int i = 0; i < N; ++i) cin >> S[i] >> T[i];
  for(int i = 0; i < N; ++i){
    bool flag_s = false, flag_t = false;
    for(int j = 0; j < N; ++j){
      if(i==j) continue;
      if(S[i]==S[j]||S[i]==T[j]) flag_s = true;
      if(T[i]==S[j]||T[i]==T[j]) flag_t = true;
    }
    if(flag_s&&flag_t){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;



}






