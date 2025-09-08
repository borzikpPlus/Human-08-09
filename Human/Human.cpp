#include <iostream>
#include "human.h"


using namespace std;

Human::Human()
{
	name = nullptr;
	surname = nullptr;
	age = 0;
}

Human::Human(const char* name, const char* surname, int age)
{
	if (this->name != nullptr)
	{
		delete[] this->name;
	}
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);

	if (this->surname != nullptr)
	{
		delete[] this->name;
	}
	this->surname = new char[strlen(name) + 1];
	strcpy_s(this->surname, strlen(surname) + 1, surname);
	
	this->age = age;
}

Human::~Human()
{
	if (name != nullptr)
	{
		delete[] name;
	}

	if (surname != nullptr)
	{
		delete[] surname;
	}

    cout << "Destrucror\n";
}

void Human::Input()
{
    name = new char[256];
    cout << "Enter name: " << ;
    cin >> name;

    surname = new char[256];
    cout << "Enter surname: ";
    cin >> surname;

    cout << "Enter age: ";
    cin >> age;
}

void Human::Print()
{
	cout << "Name: " << name << endl;
	cout << "Surname: " << surname << endl;
	cout << "Age: " << age << endl;

}

void Human::SetName(const char* name)
{
    if (this->name != nullptr)
    {
        delete[] this->name;
    }
    this->name = new char[strlen(name) + 1];
    strcpy_s(this->name, strlen(name) + 1, name);
}

void Human::SetSurname(const char* surname)
{
    if (this->surname != nullptr)
    {
        delete[] this->name;
    }
    this->surname = new char[strlen(name) + 1];
    strcpy_s(this->surname, strlen(surname) + 1, surname);
}

void Human::SetAge(int age)
{
    this->age = age;
}

char* Human::GetName()
{
    return name;
}

char* Human::GetSurname()
{
    return surname;
}

int Human::GetAge()
{
    return age;
}
