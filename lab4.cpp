#include <iostream>
using namespace std;

int main() {

int choice;
float Userconv;

  cout << "1. USD to EUR" << endl;
  cout << "2. USD to GBP" << endl;
  cout << "3. EUR to USD" << endl;
  cout << "4. EUR to GBP" << endl;
  cout << "5. GBP to USD" << endl;
  cout << "6. GBP to EUR" << endl;
  cout << "7. Exit" << endl;

do {
  cout << "Choose an option between 1-7: ";
  cin >> choice;
  
  if (choice == 1){
  cout << "What is the amount you would like to convert? " << endl;
  cin >> Userconv;
  cout << "You are converting from USD to EUR" << endl;
  cout << "Your final amount is: " << Userconv * 0.85 << endl;
}
  else if (choice == 2){
  cout << "What is the amount you would like to convert? " << endl;
  cin >> Userconv;
  cout << "You are converting from USD to GBP" << endl;
  cout << "Your final amount is: " << Userconv * 0.75 << endl;
}
  else if (choice == 3){
  cout << "What is the amount you would like to convert? " << endl;
  cin >> Userconv;
  cout << "You are converting from EUR to USD" << endl;
  cout << "Your final amount is: " << Userconv * 1.18 << endl;
}
  else if (choice == 4){
  cout << "What is the amount you would like to convert? " << endl;
  cin >> Userconv;
  cout << "You are converting from EUR to GBP" << endl;
  cout << "Your final amount is: " << Userconv * 0.88 << endl;
}
  else if (choice == 5){
  cout << "What is the amount you would like to convert? " << endl;
  cin >> Userconv;
  cout << "You are converting from GBP to USD" << endl;
  cout << "Your final amount is: " << Userconv * 1.33 << endl;
}
  else if (choice == 6){
  cout << "What is the amount you would like to convert? " << endl;
  cin >> Userconv;
  cout << "You are converting from GBP to EUR" << endl;
  cout << "Your final amount is: " << Userconv * 1.14 << endl;
}
  else if (choice == 7) {
  cout << "Exiting the program." << endl;
} 
  else {
  cout << "Invalid choice. Please select a valid option." << endl;
}

}
while (choice != 7);

return 0;

}
