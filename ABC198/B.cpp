#include<bits/stdc++.h>
using namespace std;

int main(){
  int L, R; cin >> L >> R;
  L--; R--;
  string S; cin >> S;
  for(int i = 0; i < S.size(); ++i){
    if(L<=i&&i<=R) cout << S[S.size()-i];
    else cout << S[i];
  }
  cout << endl;
}





