#include "Teacher.h"

Teacher::Teacher(string name) : Person(name) {

}

void Teacher::giveScore(Student student, double score){
    student.addScore(score);
}

void Teacher::giveScore(Student* student, double score){
    student->addScore(score);
}
