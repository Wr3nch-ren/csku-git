#ifndef TEACHER_ASSISTANT_H
#define TEACHER_ASSISTANT_H

#include <iostream>
#include "Student.h"
#include "Teacher.h"

using namespace std;

class TeacherAssistant : public Teacher {
private:
    string id;

public:
    TeacherAssistant(string);
    string getId();
};

#endif