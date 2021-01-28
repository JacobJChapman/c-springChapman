#include <iostream>

using namespace std;

int main() {
  double weightOunces;
  double metricTonOunces;
  double weightTons;
  double packageTon;

  metricTonOunces = 35,273.92;

  cout << "Enter weight of cereal package in ounces:" << endl;
  cin >> weightOunces;

  cout << weightOunces << " is the weight of a package in ounces." << endl;
  weightTons = weightOunces / metricTonOunces;
  cout << "A package of cereal is " << weightTons << " metric tons." << endl;

  packageTon = 1 / weightTons;
  cout << packageTon << " packages weigh 1 metric ton." << endl;

  return 0;

}
