#include <bits/stdc++.h>
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

int main() {
  int A, B, C, X;
  cin >> A >> B >> C >> X;
  if (X <= A)
    cout << 1.0000 << endl;
  else if (X <= B) {
    double res = double(C) / double(B - A);
    printf("%.10f\n", res);
  } else
    cout << 0 << endl;
}
