#include "Doctor .h"
#include <bits/stdc++.h>
#include "Courses.h"
using namespace std;
Doctor ::Doctor(string doctorName,vector<CoursesInfo>doctorCourses) {
       this -> doctorName = doctorName;
       this -> doctorCourses = doctorCourses;
       coursesNumber++;
}
void Doctor :: showListCourses(){
    for(auto x  : doctorCourses ){
         cout << "Course  " <<x.courseName << " : code " << x.courseCode << endl;
    }
}
void Doctor :: createCourse (string courseName ,string courseCode,pair<string , int >drCourseAssignment ){
             coursesNumber++;
             CoursesInfo course1 = *new CoursesInfo (courseName,courseCode,drCourseAssignment);
              doctorCourses.emplace_back(course1);
               course1.getDrName[courseName]=doctorName;
}
void Doctor :: doctorInfo(){
    cout << "dr "<< doctorName << "  has " << coursesNumber << " courses their codes : ";
       for(auto x:doctorCourses){
           cout << x.courseCode << " ";
       }
          cout << endl;
}

