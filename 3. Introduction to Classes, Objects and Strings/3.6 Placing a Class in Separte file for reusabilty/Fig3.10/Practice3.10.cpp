// Including class GradeBook from file Figure3.9 for use in main.
#include <iostream>
#include "/Users/jakxel/Repositorys/Cpp-Journey/3. Introduction to Classes, Objects and Strings/3.6 Placing a Class in Separte file for reusabilty/Fig.3.9/Practice3.9.cpp"
using namespace std;

//function main vegin program execution
int main()
{
  // create two GradeBook objects
  GradeBook gradeBook1("CS101 Introduction to C++ Programming");
  GradeBook gradeBook2("CS102 Data Structures in C++");

  // display initial value of courseName for each GradeBook
  cout << "gradeBook1 created for course: " << gradeBook1.getCourseName() 
      << "gradeBook1 created for course: " << gradeBook2.getCourseName()
      << endl; 
} // end main 