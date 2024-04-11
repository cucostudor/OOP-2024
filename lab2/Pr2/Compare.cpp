#define _CRT_SECURE_NO_WARNINGS
#include "Compare.h"
#include <cstring>

int CompEnglish(Student* s1, Student* s2) {
	float s1grade = s1->getEnglish(), s2grade=s2->getEnglish();
	if (s1grade == s2grade)return 0;
	else if (s1grade > s2grade)return 1;
	else return -1;
}

int CompAvg(Student* s1, Student* s2) {
	float s1grade = s1->getAvgGrade(), s2grade = s2->getAvgGrade();
	if (s1grade == s2grade)return 0;
	else if (s1grade > s2grade)return 1;
	else return -1;
}

int CompHistory(Student* s1, Student* s2) {
	float s1grade = s1->getHistory(), s2grade = s2->getHistory();
	if (s1grade == s2grade)return 0;
	else if (s1grade > s2grade)return 1;
	else return -1;
}

int CompMath(Student* s1, Student* s2) {
	float s1grade = s1->getMath(), s2grade = s2->getMath();
	if (s1grade == s2grade)return 0;
	else if (s1grade > s2grade)return 1;
	else return -1;
}

int CompName(Student* s1, Student* s2) {
	char *s1name=s1->getName(), * s2name=s2->getName();
	for (int i = 0; i < strlen(s1name); i++)
	{
		if (s1name[i] - s2name[i] == 0)return 0;
		else if (s1name[i] > s2name[i])return 1;
		else return -1;
	}
}