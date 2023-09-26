#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main(){
ofstream datafile;

int num1, num2, num3, sum;

cout << "Enter three numbers: ";
cin >> num1 >> num2 >> num3;
sum = num1 + num2 + num3;

datafile.open("mydata2.txt");

datafile << sum << endl;

datafile.close();

}
