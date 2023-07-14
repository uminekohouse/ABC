#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;
  int cnt = N / 2;
  if (N % 2 == 1)
    cnt++;
  string S;
  cin >> S;
  int cnt_t = 0, cnt_a = 0;
  for (auto c : S) {
    if (c == 'T')
      cnt_t++;
    else
      cnt_a++;
    if (cnt_t == cnt || cnt_a == cnt)
      break;
  }
  if (cnt_t == cnt)
    cout << "T" << endl;
  else
    cout << "A" << endl;
}
