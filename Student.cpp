#include "Student.hpp"

/*******************************************************************************
 * Description:
 * Default constructor. Allocates dynamic memory and prints message.
 *******************************************************************************/
Student::Student()
{
    name = new string("");
    age = new int(0);

    cout << "Student object created!" << endl;
}

/*******************************************************************************
 * Description:
 * Destructor. Frees dynamic memory and prints message.
 *******************************************************************************/
Student::~Student()
{
    delete name;
    delete age;

    name = nullptr;
    age = nullptr;

    cout << "Student object destroyed!" << endl;
}

/*******************************************************************************
 * Description:
 * Setters
 *******************************************************************************/
void Student::setName(string s)
{
    *name = s;
}

void Student::setAge(int i)
{
    *age = i;
}

/*******************************************************************************
 * Description:
 * Getters
 *******************************************************************************/
string Student::getName() const
{
    return *name;
}

int Student::getAge() const
{
    return *age;
}

/*******************************************************************************
 * Copy constructor (deep copy)
 *******************************************************************************/
Student::Student(const Student &other)
{
    name = new string(*other.name);
    age = new int(*other.age);

    cout << "Student object created!" << endl;
}

/*******************************************************************************
 * Copy assignment operator (deep copy)
 *******************************************************************************/
Student &Student::operator=(const Student &other)
{
    if (this != &other)
    {
        *name = *other.name;
        *age = *other.age;
    }
    return *this;
}
