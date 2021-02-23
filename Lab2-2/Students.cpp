#include "Students.h"
#include <iostream>

void Student::setName(char* name)
{
	this->name = name;
}

char* Student::getName()
{
	return this->name;
}

bool Student::setMath(int grade)
{
	this->math = grade;
}

int Student::getMath()
{
	return this->math;
}

bool Student::setEng(int grade)
{
	this->eng = grade;
}

int Student::getEng()
{
	return this->eng;
}

bool Student::setHistory(int grade)
{
	this->history = grade;
}

int Student::getHistory()
{
	return this->history;
}
