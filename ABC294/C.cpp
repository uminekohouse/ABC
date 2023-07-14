#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int N, M;
  cin >> N >> M;
  queue<int> A, B;
  rep(i, N) {
    int tmp;
    cin >> tmp;
    A.push(tmp);
  }
  rep(i, M) {
    int tmp;
    cin >> tmp;
    B.push(tmp);
  }
  int num = 1;
  vector<int> ans_A, ans_B;
  while (!A.empty() || !B.empty()) {
    if (A.empty()) {
      ans_B.push_back(num);
      B.pop();
    } else if (B.empty()) {
      ans_A.push_back(num);
      A.pop();
    } else {
      int a = A.front();
      int b = B.front();
      if (a < b) {
        A.pop();
        ans_A.push_back(num);
      } else {
        B.pop();
        ans_B.push_back(num);
      }
    }
    num++;
  }
  for (auto v : ans_A)
    cout << v << endl;
  for (auto v : ans_B)
    cout << v << endl;
}
