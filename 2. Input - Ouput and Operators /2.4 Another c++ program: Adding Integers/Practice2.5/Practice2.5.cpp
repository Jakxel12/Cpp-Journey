// Addition program that displays the sum of two integers.
#include <iostream>

int main(){
  // variable declarations
  int number1 = 0; // first integer to add (initialized to 0)
  int number2 = 0; // second integer to ad ( initialize to 0)
  int sum = 0; // sum of number1 and number2 (initialize to 0)

  std::cout << "Enter firts integer: "; // prompt user to data
  std::cin >> number1; // read firts integer from teh user into number 1

  std::cout << "Enter second integer: "; // prompt user for data
  std::cin >> number2; // read second integer from user into number1

  sum = number1 + number2; // add the numbers; store result in sum

  std::cout << "Sum is " << sum << std::endl;
} //end function main