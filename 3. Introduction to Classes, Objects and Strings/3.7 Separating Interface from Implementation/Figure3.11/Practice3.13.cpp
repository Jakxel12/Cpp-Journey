// gradeBook class demostration after separating
// its interface from its implementation.
#include <iostream>
#include "/Users/jakxel/Repositorys/Cpp-Journey/3. Introduction to Classes, Objects and Strings/3.7 Separating Interface from Implementation/Figure3.11/Practice3.11.cpp"
using namespace std;

// function main begins program execution
int main()
{
  // create two gradeBook objects 
  GradeBook gradeBook1 ( "CS101 Introduction to C++ Programming" );
  GradeBook gradeBook2 ( "CS102 Data Structures in C++" );

  // display initial value of courseName for each GradeBook 
  cout << "GradeBook1 created for course: " << gradeBook1.getCourseName()
  << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
  << endl;
} // end main