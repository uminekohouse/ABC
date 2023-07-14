#include<bits/stdc++.h>
using namespace std;

int main(){
  int T; cin >> T;
  for(int t = 0; t < T; ++t){
    int N; cin >> N;
    int cnt = 0;
    for(int i = 0; i < N; ++i){
      int tmp; cin >> tmp;
      if(tmp%2==1) cnt++;
    }
    cout << cnt << endl;
  }
}




