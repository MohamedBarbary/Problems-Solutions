#ifndef EDUCATIONAL_MANAGEMENT_SYSTEM1_DOCTOR_H
#define EDUCATIONAL_MANAGEMENT_SYSTEM1_DOCTOR_H
#include <bits/stdc++.h>
#include "Courses.h"
#include "Student.h"
using namespace std;
class Doctor{
public:
    string doctorName ;
    vector<CoursesInfo>doctorCourses;
    int coursesNumber=0;
     Doctor(string doctorName,vector<CoursesInfo>doctorCourses);
    void showListCourses();
    void createCourse (string courseName ,string courseCode,pair<string , int >drCourseAssignment ); // push-back
    void doctorInfo();
};
#endif //EDUCATIONAL_MANAGEMENT_SYSTEM1_DOCTOR_H
