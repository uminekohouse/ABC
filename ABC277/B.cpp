#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  set<char> mark;
  set<char> num;
  mark.insert('H');
  mark.insert('D');
  mark.insert('S');
  mark.insert('C');
  num.insert('A');
  num.insert('2');
  num.insert('3');
  num.insert('4');
  num.insert('5');
  num.insert('6');
  num.insert('7');
  num.insert('8');
  num.insert('9');
  num.insert('T');
  num.insert('J');
  num.insert('Q');
  num.insert('K');
  set<string> S;
  auto check = [&](string s){
    if(!mark.count(s[0])) return false;
    if(!num.count(s[1])) return false;
    return true;
  };

  vector<string> card(N); for(int i = 0; i < N; ++i) cin >> card[i];
  for(auto s : card){  
    if(check(s)) S.insert(s);
    else {
      cout << "No" << endl;
      return 0;
    }
  }
  if(S.size()==N) cout << "Yes" << endl;
  else cout << "No" << endl;
}




