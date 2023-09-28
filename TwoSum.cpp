#include <iostream>
using namespace std;

int main() {
  int num1, num2, sum;

  cout << "Enter two numbers: ";
  cin >> num1 >> num2;
  sum = num1 + num2;

  if (sum > 6) {
    cout << "The sum is greater than 6." << endl;
  }
  return 0;
}
