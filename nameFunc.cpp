#include <iostream>
using namespace std;

int nameID (string name) {
  if (name == "smith" || name == "Smith") {
    return 1234;
  }
  else if (name == "joker" || name == "Joker") {
    return 5678;
  }
  else if (name == "meleka" || name == "Meleka") {
    return 4123;
  }
  else if (name == "korikan" || name == "Korikan") {
    return 9991;
  }
  else {
    cout << "Unknown Name" << endl;
    return -9999;
  }
}

int main() {
  string n;
  cout << "What is your name? ";
  cin >> n;

  cout << "Your id is: " << nameID(n) << endl;
}
