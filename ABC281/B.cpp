#include<bits/stdc++.h>
using namespace std;

int main(){
  string S; cin >> S;
  regex reg{R"(^[A-Z][1-9][0-9]{5}[A-Z]$)"};
  smatch m;
  bool flag = regex_search(S, m, reg);
  cout << (flag?"Yes":"No") << endl;


}




