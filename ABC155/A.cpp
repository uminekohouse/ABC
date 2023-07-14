#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  set<int> st;
  rep(i, 3) {
    int tmp;
    cin >> tmp;
    st.insert(tmp);
  }
  if (st.size() == 2)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
