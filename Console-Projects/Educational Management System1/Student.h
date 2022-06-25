#ifndef MAIN_CPP_STUDENT_H
#define MAIN_CPP_STUDENT_H
#include <bits/stdc++.h>
#include "Courses.h"
#include "Doctor.h"
using namespace std ;
class StudentInfo{
public:
        string studentName;
        string studentEmail;
         string studentId;
          string studentUserName ;
          string  studentPassword;
          vector<>studentCourses;
    map<string , string >student_info;
    StudentInfo(string name,string email,string id,string username
            ,string password);
       void courseRegistration (string courseName );
};
#endif //MAIN_CPP_STUDENT_H
