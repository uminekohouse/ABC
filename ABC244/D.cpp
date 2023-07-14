#include<bits/stdc++.h>
using namespace std;

int main(){
  char S[3], T[3];
  for(int i = 0; i < 3; ++i) cin >> S[i];
  for(int i = 0; i < 3; ++i) cin >> T[i];
  int cnt = 0;
  for(int i = 0; i < 3; ++i){
    if(S[i]!=T[i]) cnt++;
  }
  if(cnt==0||cnt==3) cout << "Yes" << endl;
  else cout << "No" << endl;
}
