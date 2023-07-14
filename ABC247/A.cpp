#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  vector<int> S;
  function<void(int)> func = [&](int n){
    if(n==1) S.push_back(n);
    else{
      func(n-1);
      S.push_back(n);
      func(n-1);
    }
  };
  func(N);
  for(int i = 0; i < S.size(); ++i){
    if(i) cout << " ";
    cout << S[i];
  }
  cout << endl;
}
