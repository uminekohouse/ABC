#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()
#define rep(i,n) for(int i = 0; i < (n); ++i)

int main(){
  double L; cin >> L;
  double a = L/3, b = L/3, c = L-a-b;
  printf("%.10f\n", a*b*c);

}

