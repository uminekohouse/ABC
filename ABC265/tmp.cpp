#include <bits/stdc++.h>
using namespace std;

struct NumString {
  int length;
  string s;
  // コンストラクタ
  NumString(int num) {
    cout << "constructor called" << endl;

    // 引数のnumを文字列化したものをsに代入し、sの文字数をlengthに代入する
    s = to_string(num);  // (STLの関数)
    length = s.size();
  }
};

int main() {
  NumString num(12345);
  cout << num.s << endl;
  cout << num.length << endl;
}

