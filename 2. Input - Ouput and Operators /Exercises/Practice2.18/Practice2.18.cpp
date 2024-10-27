// (Comparing integers)
// Program that print the largest or if they are equal integers entered by the user

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
  int number1 = 0;
  int number2 = 0;
  cout << "Enter the two integers: " << endl;
  cin >> number1 >> number2;

  if (number1 > number2)
     cout << "the largest number is: " << number1 << endl;
  if (number1 < number2)
    cout << "the largest number is: " << number2 << endl;
  if (number1 == number2)
    cout << "They are equal" << endl;
}