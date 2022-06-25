#include <bits/stdc++.h>
#include "Courses.h"
using namespace std;

 CoursesInfo :: CoursesInfo (string courseName ,string courseCode,pair<string , int >courseAssignment ){
                   this -> courseName  = courseName ;
                    this -> courseCode = courseCode ;
                    this -> courseAssignment = courseAssignment;
 }
void CoursesInfo ::  showCourseInfo() {             // for student in future
    cout << "doctor name : " << getDrName[courseName]  << "    code :  " << courseCode << endl;
}