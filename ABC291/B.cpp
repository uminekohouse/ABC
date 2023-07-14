#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  string S;
  cin >> S;
  set<char> st;
  bool flag1, flag2;
  rep(i, S.size()) {
    if (0 <= S[i] - 'a' && S[i] - 'a' <= 25)
      flag1 = true;
    if (0 <= S[i] - 'A' && S[i] - 'A' <= 25)
      flag2 = true;
    st.insert(S[i]);
  }
  if (st.size() == S.size() && flag1 && flag2) {
    cout << "Yes" << endl;
  } else
    cout << "No" << endl;
}
