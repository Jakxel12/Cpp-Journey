// Implementations of the GradeBook member-Function definitions.
// the setCourseName function perfoms validation.
#include <iostream>
#include "/Users/jakxel/Repositorys/Cpp-Journey/3. Introduction to Classes, Objects and Strings/Practice3.15.cpp" // inlcude defiinition of class GradeBook
using namespace std;

//constructor initializes courseName with string supplied as argument
GradeBook::GradeBook( string name )
{
  setCoursename ( name ); // validate and store coursename
} // end gradeBook constructor