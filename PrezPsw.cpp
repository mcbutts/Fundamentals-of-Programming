#include <iostream>
using namespace std;

int main() {
  string userName, psw;

  cout << "Enter your username: ";
  cin >> userName;
  cout << "Enter your password: ";
  cin >> psw;

  if (userName == "Celtic" || userName == "celtic" && psw == "452") {
    cout << "Entry Allowed" << endl;
  }
  else if (!(userName == "Celtic" || userName == "celtic" && psw == "452")) {
    cout << "Entry Denied" << endl;
  }
  return 0;
}
