#include<bits/stdc++.h>
using namespace std;

int main(){
  string S, T; cin >> S >> T;
  int N = S.size();
  for(int i = 0; i < N; ++i){
    if(S[i]!=T[i]){
      cout << i+1 << endl;
      return 0;
    }
  }
  cout << T.size() << endl; 

}




