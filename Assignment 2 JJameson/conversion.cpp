#include <iostream>

using namespace std;

void input(double f, double i) {
  cout << "Write the amount of feet:" << endl;
  cin >> f;
  cout << endl << "Now write the amount of inches:" << endl;
  cin >> i;
}

void calculate(double f, double i, double m, double cm) {
  i = (f * 12) + i;
  m = i * 0.0254;
  cm = m * 100;
}

void output(double i, double m, double cm) {
  cout << i << " inches becomes " <<  m << "meters, or " << cm << "centimeters." << endl;
  //Attempts at setprecision() ended in failure for unknown reasons despite following Zybook material
}

int main() {
  double feet;
  double inches;
  double meters;
  double centimeters;
  input(feet, inches);
  calculate(feet, inches, meters, centimeters);
  output (inches, meters, centimeters);
  return 0;

}
