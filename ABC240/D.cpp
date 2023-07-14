#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  stack<pair<int, int>> st;
  int cnt = 0;
  for(int i = 0; i < N; ++i){
    int a; cin >> a; 
    cnt++;
    if(st.size() == 0) st.push(make_pair(a, 1));
    else if(a == st.top().first){
      st.top().second += 1;
      if(st.top().first == st.top().second){
        cnt -= st.top().first;
        st.pop();
      }
    }
    else st.push(make_pair(a,1));
    cout << cnt << endl;

  }
}


