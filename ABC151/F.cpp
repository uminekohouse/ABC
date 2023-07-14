#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int N;
struct P {
  double x, y;
};
vector<P> points;

double dist(P a, P b) {
  double dx = a.x - b.x;
  double dy = a.y - b.y;
  return sqrt(dx * dx + dy * dy);
}

double g(P p) {
  double res = 0;
  rep(i, N) res = max(res, dist(p, points[i]));
  return res;
}

double f(double p) {
  double l = 0, r = 1000;
  rep(_, 80) {
    double c1 = (l * 2 + r) / 3;
    double c2 = (l + r * 2) / 3;
    P a = {p, c1};
    P b = {p, c2};
    if (g(a) > g(b))
      l = c1;
    else
      r = c2;
  }
  return g((P){p, l});
}

int main() {
  cin >> N;
  points.resize(N);
  rep(i, N) cin >> points[i].x >> points[i].y;
  double l = 0, r = 1000;
  rep(_, 80) {
    double c1 = (l * 2 + r) / 3;
    double c2 = (l + r * 2) / 3;
    if (f(c1) > f(c2))
      l = c1;
    else
      r = c2;
  }
  double ans = f(l);
  printf("%.10f\n", ans);
}
