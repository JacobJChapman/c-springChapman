#include <iostream>

using namespace std;

int main() {
//list integers then their inputs
  int a;
  int b;
  int c;
  int d;
  int e;
  int f;
  int g;
  int h;
  int i;
  int j;
  int z, result=0;

  cout << "Enter 10 variables, pressing enter after each:" << endl;
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> d;
  cin >> e;
  cin >> f;
  cin >> g;
  cin >> h;
  cin >> i;
  cin >> j;

  int foo[] = { a, b, c, d, e, f, g, h, i, j };
  cout << "Positive Variables: " << endl;
  for (z = 0; z < 10; z++) {
    if (foo[z] >= 0) {
      cout << z + 1 << ": " << foo[z] << endl;
      result += foo[z];
    }
  }
  //The total was an accident, but I left it in as a feature because why not?
  cout << "Total: " << result << endl;
  return 0;
}
