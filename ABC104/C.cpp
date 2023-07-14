#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string S;
  cin >> S;
  int N;
  N = S.size();
  vector<int> ap(N + 1, 0);
  vector<int> bp(N + 1, 0);
  vector<int> cp(N + 1, 0);
  rep(i, N) {
    if (S[i] == 'A') {
      ap[i + 1] += ap[i] + 1;
      bp[i + 1] += bp[i];
      cp[i + 1] += cp[i];
    }
    if (S[i] == 'B') {
      ap[i + 1] += ap[i];
      bp[i + 1] += bp[i] + ap[i];
      cp[i + 1] += cp[i];
    }
    if (S[i] == 'C') {
      ap[i + 1] += ap[i];
      bp[i + 1] += bp[i];
      cp[i + 1] += bp[i] + cp[i];
    }
    if (S[i] == '?') {
      ap[i + 1] += ap[i] + 1;
      bp[i + 1] += bp[i] + ap[i];
      cp[i + 1] += bp[i] + cp[i];
    }
  }
  rep(i, N + 1) cout << ap[i] << " ";
  cout << endl;
  rep(i, N + 1) cout << bp[i] << " ";
  cout << endl;
  rep(i, N + 1) cout << cp[i] << " ";
  cout << endl;
  cout << cp[N] << endl;
}
