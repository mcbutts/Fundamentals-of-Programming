#include <iostream>
using namespace std;
int main () {

cout << "Enter four numbers: ";

double num1, num2, num3, num4;
cin >> num1 >> num2 >> num3 >> num4;

double sum;
sum = num1 + num3;
cout << "The sum of the first and third numbers are: " << sum << endl;

double product;
product = num2 * num4;
cout << "The product of the second and fourth numbers are: " << product << endl;

return 0;

}
