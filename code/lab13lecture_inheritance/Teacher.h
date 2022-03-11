#ifndef TEACHER_H
#define TEACHER_H

#include <iostream>
#include "Student.h"
#include "Person.h"

using namespace std;

class Teacher : public Person {
//private:
    //string name;
public:
    Teacher(string);
    //void setName(string);
    //string getName();
    void giveScore(Student , double);
    void giveScore(Student* , double);
};

#endif