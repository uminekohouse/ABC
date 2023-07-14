#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  string S; cin >> S;
  regex reg{R"(na)"};
  string T = "nya";
  for(int i = 0; i<=1000; ++i)  S = regex_replace(S, reg, T);
  cout << S << endl;
}




