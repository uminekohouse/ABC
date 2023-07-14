#include<bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int N = S.size();
  int ans = 0;
  for(int i = 0; i < N; ++i){
    if(S[i]=='0'&&S[i+1]=='0'){
      ans += 1;
      i++;
    }
    else ans++;
  }
  cout << ans << endl;



}




