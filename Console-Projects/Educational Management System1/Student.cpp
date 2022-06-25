#include "Student.h"
#include "Doctor .h"
#include "Courses.h"
#include <bits/stdc++.h>
using namespace std;
StudentInfo ::  StudentInfo(string name,string email,string id,string username
        ,string password){
                     this->studentName=name;
                     student_info["name"]=name ;
                       this->studentEmail=email;
                        student_info["email"]=email;
                           this->studentId=id;
                             student_info["id"]=id;
                               this->studentUserName=username;
                                 student_info["username"]=username;
                                 this->studentPassword=password;
                                student_info["password"]=password;
}
void StudentInfo ::  courseRegistration ( string  courseName ){
                          CoursesInfo course = *new CoursesInfo;
}