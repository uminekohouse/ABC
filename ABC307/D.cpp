#include <bits/stdc++.h>
#define rep(i, n, m) for (int i = (n); i < m; ++i)
using namespace std;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;
  stack<char> ans;
  int cnt_left = 0, cnt_right = 0;
  for (auto c : S) {
    ans.push(c);
    if (c == '(')
      cnt_left++;
    else if (c == ')' && cnt_left) {
      cnt_left--;
      while (ans.top() != '(')
        ans.pop();
      ans.pop();
    }
  }
  string res;
  while (!ans.empty())
    res += ans.top(), ans.pop();
  reverse(res.begin(), res.end());
  cout << res << endl;
}
