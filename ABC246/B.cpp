#include<bits/stdc++.h>
using namespace std;

int main(){
  double A, B; cin >> A >> B;
  double dist = sqrt(A*A+B*B);
  A /= dist; B /= dist;
  printf("%.10f %.10f\n",A, B);


}






