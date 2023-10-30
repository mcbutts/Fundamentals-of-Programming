#include <iostream>
using namespace std;

void whatsyomascot (string school) {
  if (school == "FAMU" || school == "famu") {
    cout << "RATTLERS" << endl;
  }
  else if (school == "PVAM" || school == "pvam") {
    cout << "PANTHERS" << endl;
  }
  else if (school == "BCU" || school == "bcu") {
    cout << "WILDCATS" << endl;
  }
  else {
    cout << "Choose a different school" << endl;
  }
}

int main() {
  string name;
  cout << "What is your school's name? ";
  cin >> name;
  cout << "Your mascot is: ";
  whatsyomascot(name);
}
