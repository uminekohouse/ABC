#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int N;
  cin >> N;
  bool flag = true;
  rep(i, N) {
    int tmp;
    cin >> tmp;

    if (tmp % 2 == 0) {
      if (tmp % 3 != 0 && tmp % 5 != 0)
        flag = false;
    }
  }
  if (flag)
    cout << "APPROVED" << endl;
  else
    cout << "DENIED" << endl;
}
