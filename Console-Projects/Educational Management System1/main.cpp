#include <bits/stdc++.h>
#include "Doctor .h"
#include "Courses.h"
using namespace std;
bool logout_back(int number){
    return (number==0);
}
struct ass {
    pair <string , int >p;
};
pair<string,int > create_assignment  (string name , int degree){
    ass ass1;
    ass1.p.first=name;
    ass1.p.first=degree;
    return{ass1.p.first,ass1.p.second};
}
int main() {

    return 0;
}
