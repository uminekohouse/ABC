#include<bits/stdc++.h>
using namespace std;


void GraphGen(int M){
  vector<string> original_graph(M);
  int N = 2*(int)sqrt(M);
  while(N*(N-1)<=4*M) N++;
  cout << N << endl;
  int G_size = N*(N-1)/2;
  for(int i = 0; i < M; ++i){
    string tmp;
    for(int j = 0; j < i; ++j) tmp += "11";
    while(tmp.size()!=G_size) tmp += '0';
    original_graph[i] = tmp;
  }
  for(int i = 0; i < M; ++i){
    cout << original_graph[i] << endl;
  }

}



int main(){
  int M; double ep;
  cin >> M >> ep;
  GraphGen(M);
  for(int i = 0; i < 100; ++i){
    string S; cin >> S;
    int cnt = 0;
    for(auto c : S) if(c=='1') cnt++;
    int ans = cnt/2;
    cout << min(ans, M-1) << endl;
  }
}

