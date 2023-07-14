#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<ll, ll>;

int main() {
  ll L, N1, N2;
  cin >> L >> N1 >> N2;
  vector<P> A, B;
  rep(i, N1) {
    P tmp;
    cin >> tmp.first >> tmp.second;
    A.push_back(tmp);
  }
  rep(i, N2) {
    P tmp;
    cin >> tmp.first >> tmp.second;
    B.push_back(tmp);
  }
  int l = 0;
  r = 0;
  N1--;
  N2--;
  while (l != N1 && r != N2) {
    if (A[l].second < B[r].second) {
      if (A[l].first == B[r].first)
        ans += A[l].second;
    }
