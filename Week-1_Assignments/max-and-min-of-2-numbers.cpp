#include <iostream>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  if (A > B) {
    cout << "Min = " << B << endl << "Max = " << A << endl;
  } else {
    cout << "Min = " << A << endl << "Max = " << B << endl;
  }
  return 0;
}
