#define _CRT_SECURE_NO_WARNINGS
#include "Student.h"

Student::Student() { this->grades.math = this->grades.english = this->grades.history; }

void Student::setName(const char* name, int length) {
	for (int i = 0; i < length; i++)
		this->name[i] = *(name + i);
	this->name[length] = '\0';
}

char* Student::getName() {
	return this->name;
}

void Student::setEnglish(float grade) { this->grades.english = grade; }
void Student::setMath(float grade) { this->grades.math = grade; }
void Student::setHistory(float grade) { this->grades.history = grade; }

float Student::getEnglish() { return this->grades.english; }
float Student::getMath() { return this->grades.math; }
float Student::getHistory() { return this->grades.history; }

float Student::getAvgGrade() {
	return (this->grades.english + this->grades.math + this->grades.history) / 3.0;
}