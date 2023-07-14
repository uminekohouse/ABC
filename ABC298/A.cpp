#include <bits/stdc++.h>
#define PB push_back
#define MP make_pair
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define FOR(i, n, m) for (int i = (n); i < (m); ++i)
#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvll = vector<vll>;
using vs = vector<string>;
using pii = pair<int, int>;
using Graph = vector<vector<int>>;

int Size = 5;

vector<vector<bool>> func(vector<vector<bool>> A, vector<vector<bool>> B) {
  vector<vector<bool>> res(Size, vector<bool>(Size, false));
  REP(i, Size) {
    REP(j, Size) {
      REP(k, Size) { res[i][j] = res[i][j] or (A[i][k] and B[k][j]); }
    }
  }
  return res;
}

int main() {
  vector<vector<bool>> A(Size, vector<bool>(Size, false));
  A[0][1] = true;
  A[0][4] = true;
  A[1][3] = true;
  A[2][1] = true;
  A[2][3] = true;
  A[3][1] = true;
  A[4][0] = true;

  vector<vector<bool>> B(Size, vector<bool>(Size, false));
  for (auto a : A) {
    for (auto v : a) {
      cout << v << " ";
    }
    cout << endl;
  }
  cout << endl;
  REP(i, Size) A[i][i] = true;
  B = A;
  REP(i, 10) {
    cout << i + 1 << "回目" << endl;
    vector<vector<bool>> C = func(A, B);
    for (auto c : C) {
      for (auto v : c) {
        cout << v << " ";
      }
      cout << endl;
    }
    cout << endl;
    B = C;
  }
}
