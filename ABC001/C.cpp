#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

string f(double deg) {
  deg /= 10;
  if (10.25 <= deg && deg < 33.75)
    return "NNE";
  if (33.75 <= deg && deg < 56.25)
    return "NE";
  if (56.25 <= deg && deg < 78.75)
    return "ENE";
  if (78.75 <= deg && deg < 101.25)
    return "E";
  if (101.25 <= deg && deg < 123.75)
    return "ESE";
  if (123.75 <= deg && deg < 146.25)
    return "SE";
  if (146.25 <= deg && deg < 168.75)
    return "SSE";
  if (168.75 <= deg && deg < 191.25)
    return "S";
  if (191.25 <= deg && deg < 213.75)
    return "SSW";
  if (213.75 <= deg && deg < 236.25)
    return "SW";
  if (236.25 <= deg && deg < 258.75)
    return "WSW";
  if (258.75 <= deg && deg < 281.25)
    return "W";
  if (281.25 <= deg && deg < 303.75)
    return "WNW";
  if (303.75 <= deg && deg < 326.25)
    return "NW";
  if (326.25 <= deg && deg < 348.75)
    return "NNW";

  return "N";
}

double g(double dis) {
  dis /= 60.0;
  dis *= 10;
  dis = floor(dis + 0.5);
  dis /= 10;
  if (0.0 <= dis && dis <= 0.2)
    return 0;
  if (0.3 <= dis && dis <= 1.5)
    return 1;
  if (1.6 <= dis && dis <= 3.3)
    return 2;
  if (3.4 <= dis && dis <= 5.4)
    return 3;
  if (5.5 <= dis && dis <= 7.9)
    return 4;
  if (8.0 <= dis && dis <= 10.7)
    return 5;
  if (10.8 <= dis && dis <= 13.8)
    return 6;
  if (13.9 <= dis && dis <= 17.1)
    return 7;
  if (17.2 <= dis && dis <= 20.7)
    return 8;
  if (20.8 <= dis && dis <= 24.4)
    return 9;
  if (24.5 <= dis && dis <= 28.4)
    return 10;
  if (28.5 <= dis && dis <= 32.6)
    return 11;
  if (32.7 <= dis)
    return 12;

  return dis;
}

int main() {
  double deg, dis;
  cin >> deg >> dis;
  if (g(dis) == 0)
    cout << 'C' << " " << 0 << endl;
  else
    cout << f(deg) << " " << g(dis) << endl;
}
