#ifndef MAIN_CPP_COURSES_H
#define MAIN_CPP_COURSES_H
#include <bits/stdc++.h>
#include "Student.h"
#include "Doctor.h"
using namespace std;
class Assignment{

};
class CoursesInfo{
public:
    string courseName ;
     string courseCode;
      int registeredStudentNumber=0;
      vector<pair<studentName,bool>>registered;
    pair<string , int >courseAssignment;
    map<string,string>getDrName;
         CoursesInfo (string courseName ,string courseCode,pair<string , int >courseAssignment );
         void showCourseInfo();
};
#endif //MAIN_CPP_COURSES_H
