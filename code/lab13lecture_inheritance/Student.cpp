#include "Student.h"


Student::Student(string name, string id) : Person(name) {
    this->id = id;
    score = 0;
}

double Student::getScore() {
    return score;
}

void Student::addScore(double score1) {
    if (score > 0) {
        this->score += score;
    }
}