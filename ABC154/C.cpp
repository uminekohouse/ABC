#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int N;
  cin >> N;
  set<int> st;
  rep(i, N) {
    int tmp;
    cin >> tmp;
    st.insert(tmp);
  }
  if (N == st.size())
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
