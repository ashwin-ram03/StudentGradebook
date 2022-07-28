//
// Created by Ashwin Ram
//
#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
#include <string>
#include <iostream>
#include "Course.h"
using namespace std;

void AddCourseForStudent(string name, Course* myCourse, map<string, vector<Course>>&myMap){
    myMap[name].push_back(*myCourse);
}

void AddStudentToBook(string name, map<string, vector<Course>>&myMap){
    myMap[name];
}

Course* CreateNewCourse(string courseName, int grade){
    Course* myCourse = new Course(courseName, grade);
    return myCourse;
}


void printOutAllGrades(map<string, vector<Course>>& myMap){
    map<string, vector<Course>> :: iterator myIterator; //create an iterator
    for(myIterator = myMap.begin(); myIterator!=myMap.end(); myIterator++){
        cout << myIterator->first << "'s grades" << endl;
        for(Course myCourse: myIterator->second){
            cout << myCourse.COURSE_NAME + ": " << myCourse.GRADE_RECEIEVED << endl;
        }
    }
}

