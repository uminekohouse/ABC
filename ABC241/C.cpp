#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  vector<string> S(N);
  for(int i = 0; i < N; ++i) cin >> S[i];
  bool flag = false;
  //横
  for(int i = 0; i < N; ++i){
    for(int j = 0; j+5 < N; ++j){
      int cnt = 0;
      for(int k = 0; k < 6; ++k)
        if(S[i][j+k] == '#') cnt++;
      if(cnt>=4) flag = true;
    }
  }
  //縦
  for(int i = 0; i < N; ++i){
    for(int j = 0; j+5 < N; ++j){
      int cnt = 0;
      for(int k = 0; k < 6; ++k)
        if(S[j+k][i] == '#') cnt++;
      if(cnt>=4) flag = true;
    }
  }
  //斜め
  for(int i = 0; i+5 < N; ++i){
    for(int j = 0; j+5 < N; ++j){
      int cnt = 0;
      for(int k = 0; k < 6; ++k)
        if(S[i+k][j+k] == '#') cnt++;
      if(cnt>=4) flag = true;
    }
  }
  //斜め
  for(int i = 0; i+5 < N; ++i){
    for(int j = 5; j < N; ++j){
      int cnt = 0;
      for(int k = 0; k < 6; ++k)
        if(S[i+k][j-k] == '#') cnt++;
      if(cnt>=4) flag = true;  
    }
  }
  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}


