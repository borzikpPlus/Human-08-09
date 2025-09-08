#pragma once
class Human
{
private:
	char* name;
	char* surname;
	char* height;

	int age;

public:
	Human();
	Human(const char* name, const char* surname, int age);
	~Human();

	void Input();
	void Print();


	void SetName(const char* name);
	void SetSurname(const char* surname);
	void SetAge(int age);

    char* GetName();
    char* GetSurname();
    int GetAge();


};



