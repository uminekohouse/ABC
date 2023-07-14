#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  vector<int> A(N+1, 0);
  vector<int> div2(N+1, 0), div3(N+1, 0);
  unordered_set<int> garbage;
  for(int i = 1; i <= N; ++i) cin >> A[i];
  for(int i = 1; i <= N; ++i){
    while(A[i]%2==0) A[i] /= 2, div2[i]++;
    while(A[i]%3==0) A[i] /= 3, div3[i]++;
    garbage.insert(A[i]);
  }
  if(garbage.size()!=1){
    cout << -1 << endl;
    return 0;
  }
  int min2 = div2[1], min3 = div3[1];
  for(int i = 1; i <= N; ++i) min2 = min(min2, div2[i]);
  for(int i = 1; i <= N; ++i) min3 = min(min3, div3[i]);
  int res = 0;
  for(int i = 1; i <= N; ++i){
    res += div2[i]-min2 + div3[i]-min3;
  }
  cout << res << endl;
}
