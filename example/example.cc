#include <iostream>
#include <Eigen/Dense>

using std::cout;
using std::endl;
using Eigen::MatrixXd;

int main() {
  MatrixXd X(2, 2);
  X << 1, 2, 3, 4;
  cout << X << endl;
  return 0;
}
