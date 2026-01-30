#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string* name;
    int*    age;

public:
    Student();
    ~Student();

    void setName(string s);
    void setAge(int i);

    string getName() const;
    int    getAge() const;

    // (not required, but safe to include)
    Student(const Student& other);
    Student& operator=(const Student& other);
};

#endif
