// Create and manipulate a GradeBook obect; illustrate validation.
#include <iostream>
#include "/Users/jakxel/Repositorys/Cpp-Journey/3. Introduction to Classes, Objects and Strings/3.8 validating Data with set Functions /Practice3.15.cpp"
using namespace std;

// function main begins program executions
int main()
{
  // create two gradeBook objects;
  // intial course name of gradeBook1 is too long
  GradeBook gradeBook1("CS101 Introduction to Programming in c++");
  GradeBook gradeBook2("CS102 C++ Data Structures");

  // display each GradeBoo's courseName
  cout << "GradeBook1's initial course name is: " << gradeBook1.getCourseName()
       << "\ngradeBook2's initial course name is: " << gradeBook2.getCourseName() << endl;

  // modify gradeBook1's courseName ( with a valid-length string)
  gradeBook1.setCourseName("CS101 C++ Programming");

  // display each Gradebook's courseName
  cout << "\ngradeBook1's course name is: " << gradeBook1.getCourseName()
       << "\ngradeBook2's course name is: " << gradeBook2.getCourseName() << endl;
} // end main

