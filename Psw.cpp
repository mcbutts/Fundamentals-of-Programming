#include <iostream>
using namespace std;

int main() {
  string psw1, psw2;

  cout << "Enter a password: ";
  cin >> psw1;
  cout << "Confirm your password: ";
  cin >> psw2;

  if (psw1 != psw2) {
    cout << "Enter your password again." << endl;
  }
  return 0;
}
