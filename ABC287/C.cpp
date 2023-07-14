#include<bits/stdc++.h>
using namespace std;
using ll = long long;



int main(){
  int N; cin >> N;
  int cnt = 0;
  for(int i = 0; i < N; ++i){
    string S; cin >> S;
    if(S=="For") cnt++;
  }
  if(cnt > N-cnt) cout << "Yes" << endl;
  else cout << "No" << endl;


}




