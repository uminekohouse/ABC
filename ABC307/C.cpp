#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> C(H);
  rep(i, H) cin >> C[i];
  rep(i, H) {
    rep(j, W) {
