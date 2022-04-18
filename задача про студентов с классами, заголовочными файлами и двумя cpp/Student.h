#pragma once
#include <iostream>
#include <string>

class Student
{
	std::string name;
	int age;
	int id;
	int level;

public:
	Student();
	~Student();
	void edit();
	void printInfo();
};