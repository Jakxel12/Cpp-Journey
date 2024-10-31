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
private:
  std::string courseName; // course name for this GrdeBook
}; // end class GradeBook