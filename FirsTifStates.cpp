#include <iostream>
using namespace std;

int main() {
  int num1, num2;

  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  if (num1 > num2) {
    cout << "The first number is larger than the second number." << endl;
  }
  if (num1 < num2) {
    cout << "The first number is smaller than the second number." << endl;
  }
  return 0;
}
