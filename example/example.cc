#include <iostream>
#include <Eigen/Dense>

#include <test_lib.h>

using std::cout;
using std::endl;
using Eigen::MatrixXd;

int main() {
  test_lib::test_lib_func();
  MatrixXd X(2, 2);
  X << 1, 2, 3, 4;
  cout << X << endl;
  return 0;
}
