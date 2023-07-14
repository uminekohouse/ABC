#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void comb(vector<vector <long long int> > &v){
  for(int i = 0;i <v.size(); i++){
    v[i][0]=1;
    v[i][i]=1;
  }
  for(int k = 1;k <v.size();k++){
    for(int j = 1;j<k;j++){
      v[k][j]=(v[k-1][j-1]+v[k-1][j]);
    }
  }
}

double ExpectedValue(double ep, ll x, ll y){
  vector<vector<long long int> > v(x+1,vector<long long int>(x+1,0));
  vector<vector<long long int> > w(y+1,vector<long long int>(y+1,0));
  comb(v); comb(w);
  double sum = 0;
  for(double i = 0; i <= x; ++i) sum += v[x][i]*pow((1.0-ep),i)*pow(ep,x-i)*i;
  for(double i = 0; i <= y; ++i) sum += w[y][i]*pow(ep,i)*pow((1.0-ep),y-i)*i;
  return sum;
}

void GraphGen(int M, int times){
  vector<string> original_graph(M);
  int N = (int)sqrt(2*times*M);
  while(N*(N-1)<2*times*M) N++;
  cout << N << endl;
  int G_size = N*(N-1)/2;
  //cout << "N" << N << "M" << M << "size" << G_size << endl;
  for(int i = 0; i < M; ++i){
    string tmp;
    for(int j = 0; j < i; ++j) for(int k = 1; k <= times; ++k) tmp += "1";
    while(tmp.size()!=G_size) tmp += '0';
    original_graph[i] = tmp;
  }
  for(int i = 0; i < M; ++i){
    cout << original_graph[i] << endl;
  }
}

double GetScore(vector<pair<int, int>> content, int M, double ep, int times){
  int cnt = 0;
  for(int i = 0; i < M; ++i){
    double one = ExpectedValue(ep, content[i].first, content[i].second); 
    //cout << "ori_one" << content[i].first <<"one" << one << "one/times" << round(one/times) << "i" << i << endl;
    if(floor(one/times) != i) cnt++;
  }
  double score = 1.0;
  for(int i = 1; i <= 9; ++i) score *= 10; for(int i = 1; i <= cnt; ++i) score *= 0.9; score /= (double)(M);
  //printf("%.10f\n", score);
  return score;
}
/*
int CalTimes(int M, double ep){
  double high_score = 0.0;
  int best_times;
  vector<pair<int, int>> content(M);
  for(int times = 1; times <= 40; ++times){
    int N = (int)sqrt(2*times*M);
    while(N*(N-1)<2*times*M) ++N;
    int graph_size = N*(N-1)/2;
    for(int i = 0; i < M; ++i) content[i] = make_pair(i*times, graph_size - i*times);
    double score = GetScore(content, M, ep, times);
    if(score >= high_score){
      high_score = score;
      best_times = times;
    }
  }
  //cout << "score" << high_score << "times" << best_times << endl;
  return best_times;
}
*/
int CalTimes(int M, double ep){
  int times = 0;
  if(M <= 20) times = ep/0.41*5;
  else if(M <= 30) times = ep/0.41*10;
  else if(M <= 40) times = ep/0.41*15;
  else if(M <= 50) times = ep/0.41*20;
  else if(M <= 60) times = ep/0.41*25;
  else if(M <= 70) times = ep/0.41*30;
  else if(M <= 80) times = ep/0.41*35;
  else if(M <= 90) times = ep/0.41*40;
  else if(M <= 100) times = ep/0.41*45;
  if(times==0) times = 1;
  return times;
}


int main(){
  int M; double ep;
  cin >> M >> ep;
  int  times;

  times = CalTimes(M, ep);
  GraphGen(M, times);
  for(int i = 0; i < 100; ++i){
    string S; cin >> S;
    int cnt = 0;
    for(auto c : S) if(c=='1') cnt++;
    int ans = cnt/times;
    cout << min(ans, M-1) << endl;
  }
}

