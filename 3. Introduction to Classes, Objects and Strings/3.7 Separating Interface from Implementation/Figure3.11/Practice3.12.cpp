// GradeBook member funtion definitions. This file contains
// Implementations of the member functions prototybed in GradeBook
#include <iostream>
#include "/Users/jakxel/Repositorys/Cpp-Journey/3. Introduction to Classes, Objects and Strings/3.7 Separating Interface from Implementation/Figure3.11/Practice3.11.cpp"
using namespace std;

// constructor initializes courseName with string supplied as argument
GradeBook::GradeBook(string name) : courseName(name) // Member initialize courseName
{
  // empty body
} // end gradeBook constructor

// function to set the course name
void GradeBook::setCourseName(string name)
{
  courseName = name; // store the course name in the object
} // edn function setCourseName

// Function to get the course name 
string GradeBook::getCourseName() const 
{
  return courseName; // return object's courseName
} // end function getCourseName

// display a welcome message to the GradeBook user
void GradeBook::displayMessage() const 
{
  // call getCourseName to get the courseName
  cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
} // end function displayMessage 