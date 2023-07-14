#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int N, K, M;
  cin >> N >> K >> M;
  vector<int> A(N - 1);
  for (int i = 0; i < N - 1; ++i)
    cin >> A[i];
  int sum = 0;
  for (int i = 0; i < N - 1; ++i)
    sum += A[i];
  int ave = M * N;
  int num = ave - sum;
  if (ave <= sum + K)
    cout << max(0, ave - sum) << endl;
  else
    cout << -1 << endl;
}
