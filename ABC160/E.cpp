#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
#define all(x) (x).begin(), (x).end()
#define rep(i,n) for(int i = 0; i < (n); ++i)

void func(int a[], int N){
  for(int i = 0; i < N; ++i) cout << a[i] << " ";
  cout << endl;
}

int main(){
  int X, Y, A, B, C; cin >> X >> Y >> A >> B >> C;
  int p[A+1], q[B+1], r[C+1];
  p[0] = 0; q[0] = 0; r[0] = 0;
  for(int i = 1; i <= A; ++i) cin >> p[i];
  for(int i = 1; i <= B; ++i) cin >> q[i];
  for(int i = 1; i <= C; ++i) cin >> r[i];
  sort(p+1, p+A+1, greater<>());
  sort(q+1, q+B+1, greater<>());
  sort(r+1, r+C+1, greater<>());
  //func(p, A+1);
  //func(q, B+1);
  //func(r, C+1);
  int sum_p[A+1], sum_q[B+1], sum_r[C+1];
  sum_p[0] = 0;sum_q[0] = 0;sum_r[0] = 0; 
  for(int i = 1; i <= A; ++i) sum_p[i] = p[i]+sum_p[i-1];
  for(int i = 1; i <= B; ++i) sum_q[i] = q[i]+sum_q[i-1];
  for(int i = 1; i <= C; ++i) sum_r[i] = r[i]+sum_r[i-1];
  for(int i = 0; i < N; ++i){

  /*
  func(sum_p, A+1);
  func(sum_q, B+1);
  func(sum_r, C+1);
  */

  int ans = 0;
  for(int red = 0; red <= X; ++red){
    for(int blue = 0; blue <= Y; ++blue){
      int green = X+Y-red-blue;
      if(green>C||green<0) continue;
      int tmp = 0;
      tmp += sum_p[red] + sum_q[blue] + sum_r[green];
      if(tmp > ans){
        ans = tmp;
        //cout << "red" << red << "blue" << blue << endl;
        //cout << "ans" << ans << endl; 
      }
    }
  }
  cout << ans << endl;




    
}

