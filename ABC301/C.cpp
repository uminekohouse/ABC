#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  string S, T;
  cin >> S >> T;
  vector<int> char_S(26, 0);
  vector<int> char_T(26, 0);
  int cnt_S = 0, cnt_T = 0;
  for (auto c : S) {
    if (c == '@')
      cnt_S++;
    char_S[c - 'a']++;
  }
  for (auto c : T) {
    if (c == '@')
      cnt_T++;
    char_T[c - 'a']++;
  }
  for (int i = 0; i < 26; ++i) {
    int tmp = min(char_S[i], char_T[i]);
    char_S[i] -= tmp;
    char_T[i] -= tmp;
  }
  string st = "atcoder";
  for (auto c : st) {
    int tmp = c - 'a';
    int m = min(char_S[tmp], cnt_T);
    char_S[tmp] -= m;
    cnt_T -= m;
  }
  for (auto c : st) {
    int tmp = c - 'a';
    int m = min(char_T[tmp], cnt_S);
    char_T[tmp] -= m;
    cnt_S -= m;
  }
  int nokori_S = 0, nokori_T = 0;
  for (auto v : char_S)
    nokori_S += v;
  for (auto v : char_T)
    nokori_T += v;
  if (nokori_S + nokori_T == 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
