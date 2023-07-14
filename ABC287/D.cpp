#include<bits/stdc++.h>
using namespace std;
using ll = long long;

string func(int cnt){
  if(cnt==0) return "Yes";
  else return "No";
}

int main(){
  string S, T; cin >> S >> T;
  int S_size = (int)S.size();
  int T_size = (int)T.size();
  bool flag = true;
  vector<bool> vec(T_size, true);
  int j = 0;
  int cnt = 0;
  for(int i =  S_size - T_size; i < S_size; ++i){
    if(S[i]!='?'&&T[j]!='?'&&S[i]!=T[j]){
      cnt++;
      vec[j] = false;
    }
    j++;
  }
  cout << func(cnt) << endl;
  for(int i = 0; i < T.size(); ++i){
    if(S[i]==T[i]||S[i]=='?'||T[i]=='?'){
      if(!vec[i]) vec[i] = true, cnt--;
    }
    else{
      if(vec[i]) vec[i] = false, cnt++;
    }

    cout << func(cnt) << endl;
  }


} 
