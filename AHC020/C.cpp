#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

struct P {
  int y, x;
};

enum class Response { not_broken, broken, finish, invalid };

struct Field {
  int N;
  int C;
  vector<vector<int>> is_broken;
  int total_cost;

  Field(int N, int C) : N(N), C(C), is_broken(N, vector<int>(N, 0)) {}

  Response query(int y, int x, int power) {
    total_cost += power + C;
    cout << y << " " << x << " " << power << endl;
    int r = 0;
    cin >> r;
    /*
    bedrocks[y][x] = max(0, bedrocks[y][x] - power);
    if (bedrocks[y][x] == 0)
      r = 1;
      */
    switch (r) {
    case 0:
      return Response::not_broken;
    case 1:
      is_broken[y][x] = 1;
      return Response::broken;
    case 2:
      is_broken[y][x] = 1;
      return Response::finish;
    default:
      return Response::invalid;
    }
  }
};

struct Solver {
  int N;
  int C;
  vector<P> sources, houses;
  Field field;

  Solver(int N, vector<P> &sources, vector<P> &houses, int C)
      : N(N), sources(sources), houses(houses), C(C), field(N, C) {}
  void solve() {
    // 全ての家から0番目の水源へ繋げる
    for (P house : houses) {
      int pos = 0;
      int m = 1 << 30;
      for (int i = 0; i < sources.size(); ++i) {
        int tmp = abs(house.y - sources[i].y) + abs(house.x - sources[i].x);
        if (tmp <= m) {
          m = tmp;
          pos = i;
        }
      }
      move(house, sources[pos]);
    }
    // cout << "total_cost" << field.total_cost << endl;
    assert(false);
  }

  void move(P start, P goal) {
    // you can output comment
    cout << "# move from (" << start.y << "," << start.x << ") to (" << goal.y
         << "," << goal.x << ")" << endl;

    // down/up
    if (start.y < goal.y) {
      for (int y = start.y; y < goal.y; y++) {
        destruct(y, start.x);
      }
    } else {
      for (int y = start.y; y > goal.y; y--) {
        destruct(y, start.x);
      }
    }

    // right/left
    if (start.x < goal.x) {
      for (int x = start.x; x <= goal.x; x++) {
        destruct(goal.y, x);
      }
    } else {
      for (int x = start.x; x >= goal.x; x--) {
        destruct(goal.y, x);
      }
    }
  }

  void destruct(int y, int x) {
    // 壊れるまで一定の力を加える
    const int power = 100;
    while (!field.is_broken[y][x]) {
      Response result = field.query(y, x, power);
      if (result == Response::finish) {
        cerr << "total_cost=" << field.total_cost << endl;
        exit(0);
      } else if (result == Response::invalid) {
        cerr << "invalid: y=" << y << " x=" << x << endl;
        exit(1);
      }
    }
  }
};

int main() {

  // ファイルから入力をもらう
  /*
  ifstream in("0001.txt");
  cin.rdbuf(in.rdbuf());
  */

  // 入力
  int N, W, K, C;
  cin >> N >> W >> K >> C;
  /*
  vector<vector<int>> bedrocks(N, vector<int>(N));
  rep(i, N) rep(j, N) cin >> bedrocks[i][j];
  */
  vector<P> sources(W), houses(K);
  rep(i, W) cin >> sources[i].y >> sources[i].x;
  rep(i, K) cin >> houses[i].y >> houses[i].x;

  Solver solver(N, sources, houses, C);
  solver.solve();
}
