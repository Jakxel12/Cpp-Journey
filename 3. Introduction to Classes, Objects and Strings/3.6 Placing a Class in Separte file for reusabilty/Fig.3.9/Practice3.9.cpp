// GradeBook class definition in a separate file from main.
#include <iostream>
#include <string>

// GradeBook class definition
class GradeBook
{
public:
  // constructor initializes courseName with string supplied as argmumnet
  explicit GradeBook( std::string name ) : courseName ( name ) // Member initializer to initialize courseName
  {
    // empty body
  } // end GradeBook constructor

  // function to get the course name 
  void setCourse ( std:: string name )
  {
    courseName = name; // store the course name in the object
  } // end function setCourseName 

  // function to get the course name
  std::string getCourseName() const 
  {
    return courseName; // return objects courseName
  } // end function getCourseName

  // display a welcome message to the GradeBook user
  void displayMessage() const 
  {
    std::cout << "Welcome to the grade book for \n" << getCourseName() << "!" << std::endl;
  } // end function displayMessage
  
private:
  std::string courseName; // course name for this GrdeBook
}; // end class GradeBook