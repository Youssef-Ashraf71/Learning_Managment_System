#include "student.h"

student::student()
{
    courses = std::vector<course*>();
}

void student::add_course(course *crs){
    courses.push_back(crs);
}
