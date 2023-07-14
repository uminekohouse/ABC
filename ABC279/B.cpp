#include<bits/stdc++.h>
using namespace std;

int main(){
  string S, T; cin >> S >> T;
  if(T.size()>S.size()){
    cout << "No" << endl;
    return 0;
  }
  for(int i = 0; i+T.size()-1 < S.size(); ++i){
    string U = S.substr(i, T.size());
    if(U==T){
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}




