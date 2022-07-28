//
// Created by Ashwin Ram
//
#include <string>
#include <iostream>
#ifndef RAMANAMAP_COURSE_H
#define RAMANAMAP_COURSE_H

using namespace std;

class Course{
public:
    string COURSE_NAME;
    int GRADE_RECEIEVED;

    Course(){
        COURSE_NAME = "";
        GRADE_RECEIEVED =0;
    }
    Course(string name, int grade){
        COURSE_NAME = name;
        GRADE_RECEIEVED = grade;
    }

    void setGrade(int GRADE_RECEIEVED){
        this->GRADE_RECEIEVED = GRADE_RECEIEVED;
    }

    /**
    ~Course(){
        cout << "Calling destructor" << endl;
    }
     **/

};

#endif //RAMANAMAP_COURSE_H
