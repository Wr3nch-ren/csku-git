#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "TeacherAssistant.h"

using namespace std;

int main() {
    Person* p1 = new Person("Alice");

    cout << "PERSON: " << p1->getName() << endl;

    p1->setName("Alice wonderland");
    cout << "PERSON: " << p1->getName() << endl;

    Student* s1 = new Student("Bob", "6410401234");
    s1->addScore(30);

    cout << "STUDENT: " << s1->getName() << endl;
    cout << "  score: " << s1->getScore() << endl;

    Teacher* t1 = new Teacher("Stan");
    t1->giveScore(s1, 45);
    cout << "TEACHER: " << t1->getName() << endl;

    TeacherAssistant* ta1 = new TeacherAssistant("Senior", "6210405555");
    cout << "TA: " << ta1->getName() << endl;

    cout << "----------------------------------" << endl;
    
    return 0;
}